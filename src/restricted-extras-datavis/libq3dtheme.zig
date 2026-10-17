const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QLinearGradient = @import("libqt6").QLinearGradient;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const q3dtheme_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html)
pub const Q3DTheme = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Q3DTheme,

    pub const _is_Q3DTheme = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Q3DTheme object in C++ memory
    ///
    pub fn new() Q3DTheme {
        return .{ .ptr = qtc.Q3DTheme_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Q3DTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` themeType: q3dtheme_enums.Theme `
    ///
    pub fn new2(themeType: i32) Q3DTheme {
        return .{ .ptr = qtc.Q3DTheme_new2(@bitCast(themeType)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Q3DTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) Q3DTheme {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Q3DTheme_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new Q3DTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` themeType: q3dtheme_enums.Theme `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(themeType: i32, _parent: anytype) Q3DTheme {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Q3DTheme_new4(@bitCast(themeType), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn metaObject(self: Q3DTheme) QMetaObject {
        return .{ .ptr = qtc.Q3DTheme_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Q3DTheme, callback: *const fn (Q3DTheme) callconv(.c) QMetaObject) void {
        qtc.Q3DTheme_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn superMetaObject(self: Q3DTheme) QMetaObject {
        return .{ .ptr = qtc.Q3DTheme_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Q3DTheme, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DTheme_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Q3DTheme, callback: *const fn (Q3DTheme, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Q3DTheme_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Q3DTheme, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DTheme_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Q3DTheme, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DTheme_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Q3DTheme, callback: *const fn (Q3DTheme, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Q3DTheme_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Q3DTheme, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DTheme_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.Q3DTheme_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DTheme.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` themeType: q3dtheme_enums.Theme `
    ///
    pub fn setType(self: Q3DTheme, themeType: i32) void {
        qtc.Q3DTheme_SetType(@ptrCast(self.ptr), @bitCast(themeType));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ## Returns:
    ///
    /// ` q3dtheme_enums.Theme `
    ///
    pub fn type0(self: Q3DTheme) i32 {
        return qtc.Q3DTheme_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaseColors` instead
    ///
    pub const SetBaseColors = setBaseColors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBaseColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` colors: []QColor `
    ///
    pub fn setBaseColors(self: Q3DTheme, colors: []QColor) void {
        const colors_list = qtc.libqt_list{
            .len = colors.len,
            .data = @ptrCast(colors.ptr),
        };
        qtc.Q3DTheme_SetBaseColors(@ptrCast(self.ptr), colors_list);
    }

    /// ### DEPRECATED: Use `baseColors` instead
    ///
    pub const BaseColors = baseColors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseColors(self: Q3DTheme, allocator: std.mem.Allocator) []QColor {
        const _arr: qtc.libqt_list = qtc.Q3DTheme_BaseColors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QColor, _arr.len) catch @panic("Q3DTheme.baseColors: Memory allocation failed");
        const _data_val: [*]QtC.QColor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn backgroundColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowColor` instead
    ///
    pub const SetWindowColor = setWindowColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setWindowColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setWindowColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetWindowColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `windowColor` instead
    ///
    pub const WindowColor = windowColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#windowColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn windowColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_WindowColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelTextColor` instead
    ///
    pub const SetLabelTextColor = setLabelTextColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setLabelTextColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetLabelTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `labelTextColor` instead
    ///
    pub const LabelTextColor = labelTextColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn labelTextColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_LabelTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelBackgroundColor` instead
    ///
    pub const SetLabelBackgroundColor = setLabelBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setLabelBackgroundColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetLabelBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `labelBackgroundColor` instead
    ///
    pub const LabelBackgroundColor = labelBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn labelBackgroundColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_LabelBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGridLineColor` instead
    ///
    pub const SetGridLineColor = setGridLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setGridLineColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `gridLineColor` instead
    ///
    pub const GridLineColor = gridLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn gridLineColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_GridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSingleHighlightColor` instead
    ///
    pub const SetSingleHighlightColor = setSingleHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setSingleHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setSingleHighlightColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetSingleHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `singleHighlightColor` instead
    ///
    pub const SingleHighlightColor = singleHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn singleHighlightColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_SingleHighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMultiHighlightColor` instead
    ///
    pub const SetMultiHighlightColor = setMultiHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setMultiHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setMultiHighlightColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetMultiHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `multiHighlightColor` instead
    ///
    pub const MultiHighlightColor = multiHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn multiHighlightColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_MultiHighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLightColor` instead
    ///
    pub const SetLightColor = setLightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setLightColor(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SetLightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `lightColor` instead
    ///
    pub const LightColor = lightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn lightColor(self: Q3DTheme) QColor {
        return .{ .ptr = qtc.Q3DTheme_LightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseGradients` instead
    ///
    pub const SetBaseGradients = setBaseGradients;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBaseGradients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` gradients: []QLinearGradient `
    ///
    pub fn setBaseGradients(self: Q3DTheme, gradients: []QLinearGradient) void {
        const gradients_list = qtc.libqt_list{
            .len = gradients.len,
            .data = @ptrCast(gradients.ptr),
        };
        qtc.Q3DTheme_SetBaseGradients(@ptrCast(self.ptr), gradients_list);
    }

    /// ### DEPRECATED: Use `baseGradients` instead
    ///
    pub const BaseGradients = baseGradients;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseGradients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseGradients(self: Q3DTheme, allocator: std.mem.Allocator) []QLinearGradient {
        const _arr: qtc.libqt_list = qtc.Q3DTheme_BaseGradients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLinearGradient, _arr.len) catch @panic("Q3DTheme.baseGradients: Memory allocation failed");
        const _data_val: [*]QtC.QLinearGradient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setSingleHighlightGradient` instead
    ///
    pub const SetSingleHighlightGradient = setSingleHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setSingleHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setSingleHighlightGradient(self: Q3DTheme, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.Q3DTheme_SetSingleHighlightGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `singleHighlightGradient` instead
    ///
    pub const SingleHighlightGradient = singleHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn singleHighlightGradient(self: Q3DTheme) QLinearGradient {
        return .{ .ptr = qtc.Q3DTheme_SingleHighlightGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMultiHighlightGradient` instead
    ///
    pub const SetMultiHighlightGradient = setMultiHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setMultiHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setMultiHighlightGradient(self: Q3DTheme, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.Q3DTheme_SetMultiHighlightGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `multiHighlightGradient` instead
    ///
    pub const MultiHighlightGradient = multiHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn multiHighlightGradient(self: Q3DTheme) QLinearGradient {
        return .{ .ptr = qtc.Q3DTheme_MultiHighlightGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLightStrength` instead
    ///
    pub const SetLightStrength = setLightStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLightStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` strength: f32 `
    ///
    pub fn setLightStrength(self: Q3DTheme, strength: f32) void {
        qtc.Q3DTheme_SetLightStrength(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### DEPRECATED: Use `lightStrength` instead
    ///
    pub const LightStrength = lightStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn lightStrength(self: Q3DTheme) f32 {
        return qtc.Q3DTheme_LightStrength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAmbientLightStrength` instead
    ///
    pub const SetAmbientLightStrength = setAmbientLightStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setAmbientLightStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` strength: f32 `
    ///
    pub fn setAmbientLightStrength(self: Q3DTheme, strength: f32) void {
        qtc.Q3DTheme_SetAmbientLightStrength(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### DEPRECATED: Use `ambientLightStrength` instead
    ///
    pub const AmbientLightStrength = ambientLightStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#ambientLightStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn ambientLightStrength(self: Q3DTheme) f32 {
        return qtc.Q3DTheme_AmbientLightStrength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightLightStrength` instead
    ///
    pub const SetHighlightLightStrength = setHighlightLightStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setHighlightLightStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` strength: f32 `
    ///
    pub fn setHighlightLightStrength(self: Q3DTheme, strength: f32) void {
        qtc.Q3DTheme_SetHighlightLightStrength(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### DEPRECATED: Use `highlightLightStrength` instead
    ///
    pub const HighlightLightStrength = highlightLightStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#highlightLightStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn highlightLightStrength(self: Q3DTheme) f32 {
        return qtc.Q3DTheme_HighlightLightStrength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelBorderEnabled` instead
    ///
    pub const SetLabelBorderEnabled = setLabelBorderEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelBorderEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn setLabelBorderEnabled(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_SetLabelBorderEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isLabelBorderEnabled` instead
    ///
    pub const IsLabelBorderEnabled = isLabelBorderEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isLabelBorderEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isLabelBorderEnabled(self: Q3DTheme) bool {
        return qtc.Q3DTheme_IsLabelBorderEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: Q3DTheme, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.Q3DTheme_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn font(self: Q3DTheme) QFont {
        return .{ .ptr = qtc.Q3DTheme_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundEnabled` instead
    ///
    pub const SetBackgroundEnabled = setBackgroundEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBackgroundEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn setBackgroundEnabled(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_SetBackgroundEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isBackgroundEnabled` instead
    ///
    pub const IsBackgroundEnabled = isBackgroundEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isBackgroundEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isBackgroundEnabled(self: Q3DTheme) bool {
        return qtc.Q3DTheme_IsBackgroundEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridEnabled` instead
    ///
    pub const SetGridEnabled = setGridEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setGridEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn setGridEnabled(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_SetGridEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isGridEnabled` instead
    ///
    pub const IsGridEnabled = isGridEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isGridEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isGridEnabled(self: Q3DTheme) bool {
        return qtc.Q3DTheme_IsGridEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelBackgroundEnabled` instead
    ///
    pub const SetLabelBackgroundEnabled = setLabelBackgroundEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelBackgroundEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn setLabelBackgroundEnabled(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_SetLabelBackgroundEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isLabelBackgroundEnabled` instead
    ///
    pub const IsLabelBackgroundEnabled = isLabelBackgroundEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isLabelBackgroundEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isLabelBackgroundEnabled(self: Q3DTheme) bool {
        return qtc.Q3DTheme_IsLabelBackgroundEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorStyle` instead
    ///
    pub const SetColorStyle = setColorStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setColorStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` style: q3dtheme_enums.ColorStyle `
    ///
    pub fn setColorStyle(self: Q3DTheme, style: i32) void {
        qtc.Q3DTheme_SetColorStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `colorStyle` instead
    ///
    pub const ColorStyle = colorStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#colorStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ## Returns:
    ///
    /// ` q3dtheme_enums.ColorStyle `
    ///
    pub fn colorStyle(self: Q3DTheme) i32 {
        return qtc.Q3DTheme_ColorStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeChanged` instead
    ///
    pub const TypeChanged = typeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#typeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` themeType: q3dtheme_enums.Theme `
    ///
    pub fn typeChanged(self: Q3DTheme, themeType: i32) void {
        qtc.Q3DTheme_TypeChanged(@ptrCast(self.ptr), @bitCast(themeType));
    }

    /// ### DEPRECATED: Use `onTypeChanged` instead
    ///
    pub const OnTypeChanged = onTypeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#typeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, themeType: q3dtheme_enums.Theme) callconv(.c) void `
    ///
    pub fn onTypeChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, i32) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_TypeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseColorsChanged` instead
    ///
    pub const BaseColorsChanged = baseColorsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseColorsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` colors: []QColor `
    ///
    pub fn baseColorsChanged(self: Q3DTheme, colors: []QColor) void {
        const colors_list = qtc.libqt_list{
            .len = colors.len,
            .data = @ptrCast(colors.ptr),
        };
        qtc.Q3DTheme_BaseColorsChanged(@ptrCast(self.ptr), colors_list);
    }

    /// ### DEPRECATED: Use `onBaseColorsChanged` instead
    ///
    pub const OnBaseColorsChanged = onBaseColorsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseColorsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, colors: qtc.libqt_list ([]QColor)) callconv(.c) void `
    ///
    pub fn onBaseColorsChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, qtc.libqt_list) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_BaseColorsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backgroundColorChanged` instead
    ///
    pub const BackgroundColorChanged = backgroundColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn backgroundColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_BackgroundColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onBackgroundColorChanged` instead
    ///
    pub const OnBackgroundColorChanged = onBackgroundColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onBackgroundColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_BackgroundColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowColorChanged` instead
    ///
    pub const WindowColorChanged = windowColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#windowColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn windowColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_WindowColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onWindowColorChanged` instead
    ///
    pub const OnWindowColorChanged = onWindowColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#windowColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onWindowColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_WindowColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelTextColorChanged` instead
    ///
    pub const LabelTextColorChanged = labelTextColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelTextColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn labelTextColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_LabelTextColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelTextColorChanged` instead
    ///
    pub const OnLabelTextColorChanged = onLabelTextColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelTextColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelTextColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_LabelTextColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelBackgroundColorChanged` instead
    ///
    pub const LabelBackgroundColorChanged = labelBackgroundColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn labelBackgroundColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_LabelBackgroundColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelBackgroundColorChanged` instead
    ///
    pub const OnLabelBackgroundColorChanged = onLabelBackgroundColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelBackgroundColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_LabelBackgroundColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLineColorChanged` instead
    ///
    pub const GridLineColorChanged = gridLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn gridLineColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onGridLineColorChanged` instead
    ///
    pub const OnGridLineColorChanged = onGridLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onGridLineColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `singleHighlightColorChanged` instead
    ///
    pub const SingleHighlightColorChanged = singleHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn singleHighlightColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_SingleHighlightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSingleHighlightColorChanged` instead
    ///
    pub const OnSingleHighlightColorChanged = onSingleHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSingleHighlightColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_SingleHighlightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiHighlightColorChanged` instead
    ///
    pub const MultiHighlightColorChanged = multiHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn multiHighlightColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_MultiHighlightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onMultiHighlightColorChanged` instead
    ///
    pub const OnMultiHighlightColorChanged = onMultiHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onMultiHighlightColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_MultiHighlightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lightColorChanged` instead
    ///
    pub const LightColorChanged = lightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn lightColorChanged(self: Q3DTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Q3DTheme_LightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onLightColorChanged` instead
    ///
    pub const OnLightColorChanged = onLightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onLightColorChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QColor) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_LightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseGradientsChanged` instead
    ///
    pub const BaseGradientsChanged = baseGradientsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseGradientsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` gradients: []QLinearGradient `
    ///
    pub fn baseGradientsChanged(self: Q3DTheme, gradients: []QLinearGradient) void {
        const gradients_list = qtc.libqt_list{
            .len = gradients.len,
            .data = @ptrCast(gradients.ptr),
        };
        qtc.Q3DTheme_BaseGradientsChanged(@ptrCast(self.ptr), gradients_list);
    }

    /// ### DEPRECATED: Use `onBaseGradientsChanged` instead
    ///
    pub const OnBaseGradientsChanged = onBaseGradientsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseGradientsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, gradients: qtc.libqt_list ([]QLinearGradient)) callconv(.c) void `
    ///
    pub fn onBaseGradientsChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, qtc.libqt_list) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_BaseGradientsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `singleHighlightGradientChanged` instead
    ///
    pub const SingleHighlightGradientChanged = singleHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn singleHighlightGradientChanged(self: Q3DTheme, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.Q3DTheme_SingleHighlightGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onSingleHighlightGradientChanged` instead
    ///
    pub const OnSingleHighlightGradientChanged = onSingleHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onSingleHighlightGradientChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QLinearGradient) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_SingleHighlightGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiHighlightGradientChanged` instead
    ///
    pub const MultiHighlightGradientChanged = multiHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn multiHighlightGradientChanged(self: Q3DTheme, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.Q3DTheme_MultiHighlightGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onMultiHighlightGradientChanged` instead
    ///
    pub const OnMultiHighlightGradientChanged = onMultiHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onMultiHighlightGradientChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QLinearGradient) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_MultiHighlightGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lightStrengthChanged` instead
    ///
    pub const LightStrengthChanged = lightStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightStrengthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` strength: f32 `
    ///
    pub fn lightStrengthChanged(self: Q3DTheme, strength: f32) void {
        qtc.Q3DTheme_LightStrengthChanged(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### DEPRECATED: Use `onLightStrengthChanged` instead
    ///
    pub const OnLightStrengthChanged = onLightStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightStrengthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, strength: f32) callconv(.c) void `
    ///
    pub fn onLightStrengthChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, f32) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_LightStrengthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ambientLightStrengthChanged` instead
    ///
    pub const AmbientLightStrengthChanged = ambientLightStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#ambientLightStrengthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` strength: f32 `
    ///
    pub fn ambientLightStrengthChanged(self: Q3DTheme, strength: f32) void {
        qtc.Q3DTheme_AmbientLightStrengthChanged(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### DEPRECATED: Use `onAmbientLightStrengthChanged` instead
    ///
    pub const OnAmbientLightStrengthChanged = onAmbientLightStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#ambientLightStrengthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, strength: f32) callconv(.c) void `
    ///
    pub fn onAmbientLightStrengthChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, f32) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_AmbientLightStrengthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highlightLightStrengthChanged` instead
    ///
    pub const HighlightLightStrengthChanged = highlightLightStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#highlightLightStrengthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` strength: f32 `
    ///
    pub fn highlightLightStrengthChanged(self: Q3DTheme, strength: f32) void {
        qtc.Q3DTheme_HighlightLightStrengthChanged(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### DEPRECATED: Use `onHighlightLightStrengthChanged` instead
    ///
    pub const OnHighlightLightStrengthChanged = onHighlightLightStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#highlightLightStrengthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, strength: f32) callconv(.c) void `
    ///
    pub fn onHighlightLightStrengthChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, f32) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_HighlightLightStrengthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelBorderEnabledChanged` instead
    ///
    pub const LabelBorderEnabledChanged = labelBorderEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBorderEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn labelBorderEnabledChanged(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_LabelBorderEnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onLabelBorderEnabledChanged` instead
    ///
    pub const OnLabelBorderEnabledChanged = onLabelBorderEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBorderEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, enabled: bool) callconv(.c) void `
    ///
    pub fn onLabelBorderEnabledChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, bool) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_LabelBorderEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _font: QFont `
    ///
    pub fn fontChanged(self: Q3DTheme, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.Q3DTheme_FontChanged(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, font: QFont) callconv(.c) void `
    ///
    pub fn onFontChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, QFont) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backgroundEnabledChanged` instead
    ///
    pub const BackgroundEnabledChanged = backgroundEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn backgroundEnabledChanged(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_BackgroundEnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onBackgroundEnabledChanged` instead
    ///
    pub const OnBackgroundEnabledChanged = onBackgroundEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, enabled: bool) callconv(.c) void `
    ///
    pub fn onBackgroundEnabledChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, bool) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_BackgroundEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridEnabledChanged` instead
    ///
    pub const GridEnabledChanged = gridEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn gridEnabledChanged(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_GridEnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onGridEnabledChanged` instead
    ///
    pub const OnGridEnabledChanged = onGridEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, enabled: bool) callconv(.c) void `
    ///
    pub fn onGridEnabledChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, bool) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_GridEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelBackgroundEnabledChanged` instead
    ///
    pub const LabelBackgroundEnabledChanged = labelBackgroundEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` enabled: bool `
    ///
    pub fn labelBackgroundEnabledChanged(self: Q3DTheme, enabled: bool) void {
        qtc.Q3DTheme_LabelBackgroundEnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onLabelBackgroundEnabledChanged` instead
    ///
    pub const OnLabelBackgroundEnabledChanged = onLabelBackgroundEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, enabled: bool) callconv(.c) void `
    ///
    pub fn onLabelBackgroundEnabledChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, bool) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_LabelBackgroundEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorStyleChanged` instead
    ///
    pub const ColorStyleChanged = colorStyleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#colorStyleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` style: q3dtheme_enums.ColorStyle `
    ///
    pub fn colorStyleChanged(self: Q3DTheme, style: i32) void {
        qtc.Q3DTheme_ColorStyleChanged(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onColorStyleChanged` instead
    ///
    pub const OnColorStyleChanged = onColorStyleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#colorStyleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, style: q3dtheme_enums.ColorStyle) callconv(.c) void `
    ///
    pub fn onColorStyleChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, i32) callconv(.c) void) void {
        qtc.Q3DTheme_Connect_ColorStyleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.Q3DTheme_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DTheme.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.Q3DTheme_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DTheme.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Q3DTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DTheme.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Q3DTheme, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isWidgetType(self: Q3DTheme) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isWindowType(self: Q3DTheme) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn isQuickItemType(self: Q3DTheme) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn signalsBlocked(self: Q3DTheme) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Q3DTheme, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn thread(self: Q3DTheme) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Q3DTheme, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Q3DTheme, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Q3DTheme, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Q3DTheme, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Q3DTheme, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Q3DTheme, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Q3DTheme.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Q3DTheme, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Q3DTheme, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Q3DTheme, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Q3DTheme, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn disconnect3(self: Q3DTheme) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Q3DTheme, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn dumpObjectTree(self: Q3DTheme) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn dumpObjectInfo(self: Q3DTheme) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Q3DTheme, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Q3DTheme, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Q3DTheme, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Q3DTheme.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Q3DTheme.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn bindingStorage(self: Q3DTheme) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn bindingStorage2(self: Q3DTheme) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn destroyed(self: Q3DTheme) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Q3DTheme, callback: *const fn (Q3DTheme) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn parent(self: Q3DTheme) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Q3DTheme, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn deleteLater(self: Q3DTheme) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Q3DTheme, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Q3DTheme, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Q3DTheme, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Q3DTheme, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Q3DTheme, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Q3DTheme, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Q3DTheme, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Q3DTheme, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Q3DTheme, callback: *const fn (Q3DTheme, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Q3DTheme, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DTheme_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Q3DTheme, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DTheme_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Q3DTheme, callback: *const fn (Q3DTheme, QEvent) callconv(.c) bool) void {
        qtc.Q3DTheme_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Q3DTheme, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DTheme_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Q3DTheme, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DTheme_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Q3DTheme, callback: *const fn (Q3DTheme, QObject, QEvent) callconv(.c) bool) void {
        qtc.Q3DTheme_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Q3DTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DTheme_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Q3DTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DTheme_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Q3DTheme, callback: *const fn (Q3DTheme, QTimerEvent) callconv(.c) void) void {
        qtc.Q3DTheme_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Q3DTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DTheme_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Q3DTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DTheme_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Q3DTheme, callback: *const fn (Q3DTheme, QChildEvent) callconv(.c) void) void {
        qtc.Q3DTheme_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Q3DTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DTheme_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Q3DTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DTheme_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Q3DTheme, callback: *const fn (Q3DTheme, QEvent) callconv(.c) void) void {
        qtc.Q3DTheme_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Q3DTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DTheme_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Q3DTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DTheme_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Q3DTheme, callback: *const fn (Q3DTheme, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DTheme_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Q3DTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DTheme_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Q3DTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DTheme_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme`
    ///
    /// ` callback: *const fn (self: Q3DTheme, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Q3DTheme, callback: *const fn (Q3DTheme, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DTheme_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn sender(self: Q3DTheme) QObject {
        return .{ .ptr = qtc.Q3DTheme_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn senderSignalIndex(self: Q3DTheme) i32 {
        return qtc.Q3DTheme_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Q3DTheme, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Q3DTheme_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Q3DTheme, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Q3DTheme_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DTheme `
    ///
    /// ` callback: *const fn (self: Q3DTheme, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Q3DTheme, callback: *const fn (Q3DTheme, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#dtor.Q3DTheme)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Q3DTheme `
    ///
    pub fn delete(self: Q3DTheme) void {
        qtc.Q3DTheme_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#public-types)
pub const enums = struct {
    pub const ColorStyle = enum {
        pub const ColorStyleUniform: i32 = 0;
        pub const ColorStyleObjectGradient: i32 = 1;
        pub const ColorStyleRangeGradient: i32 = 2;
    };

    pub const Theme = enum {
        pub const ThemeQt: i32 = 0;
        pub const ThemePrimaryColors: i32 = 1;
        pub const ThemeDigia: i32 = 2;
        pub const ThemeStoneMoss: i32 = 3;
        pub const ThemeArmyBlue: i32 = 4;
        pub const ThemeRetro: i32 = 5;
        pub const ThemeEbony: i32 = 6;
        pub const ThemeIsabelle: i32 = 7;
        pub const ThemeUserDefined: i32 = 8;
    };
};
