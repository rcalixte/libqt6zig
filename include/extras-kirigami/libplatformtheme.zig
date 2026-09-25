const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPalette = @import("libqt6").QPalette;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const platformtheme_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html)
pub const Kirigami__Platform__PlatformTheme = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__PlatformTheme,

    pub const _is_Kirigami__Platform__PlatformTheme = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Kirigami::Platform::PlatformTheme object in C++ memory
    ///
    pub fn new() Kirigami__Platform__PlatformTheme {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Kirigami::Platform::PlatformTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) Kirigami__Platform__PlatformTheme {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn metaObject(self: Kirigami__Platform__PlatformTheme) QMetaObject {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Kirigami__Platform__PlatformTheme, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Kirigami__Platform__PlatformTheme_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn superMetaObject(self: Kirigami__Platform__PlatformTheme) QMetaObject {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Kirigami__Platform__PlatformTheme, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Kirigami__Platform__PlatformTheme_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Kirigami__Platform__PlatformTheme_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Kirigami__Platform__PlatformTheme, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Kirigami__Platform__PlatformTheme_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Kirigami__Platform__PlatformTheme, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Kirigami__Platform__PlatformTheme_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Kirigami__Platform__PlatformTheme_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Kirigami__Platform__PlatformTheme, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Kirigami__Platform__PlatformTheme_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.Kirigami__Platform__PlatformTheme_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__PlatformTheme.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColorSet` instead
    ///
    pub const SetColorSet = setColorSet;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setColorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _colorSet: platformtheme_enums.ColorSet `
    ///
    pub fn setColorSet(self: Kirigami__Platform__PlatformTheme, _colorSet: i32) void {
        qtc.Kirigami__Platform__PlatformTheme_SetColorSet(@ptrCast(self.ptr), @bitCast(_colorSet));
    }

    /// ### DEPRECATED: Use `colorSet` instead
    ///
    pub const ColorSet = colorSet;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ## Returns:
    ///
    /// ` platformtheme_enums.ColorSet `
    ///
    pub fn colorSet(self: Kirigami__Platform__PlatformTheme) i32 {
        return qtc.Kirigami__Platform__PlatformTheme_ColorSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorGroup` instead
    ///
    pub const SetColorGroup = setColorGroup;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _colorGroup: platformtheme_enums.ColorGroup `
    ///
    pub fn setColorGroup(self: Kirigami__Platform__PlatformTheme, _colorGroup: i32) void {
        qtc.Kirigami__Platform__PlatformTheme_SetColorGroup(@ptrCast(self.ptr), @bitCast(_colorGroup));
    }

    /// ### DEPRECATED: Use `colorGroup` instead
    ///
    pub const ColorGroup = colorGroup;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ## Returns:
    ///
    /// ` platformtheme_enums.ColorGroup `
    ///
    pub fn colorGroup(self: Kirigami__Platform__PlatformTheme) i32 {
        return qtc.Kirigami__Platform__PlatformTheme_ColorGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inherit` instead
    ///
    pub const Inherit = inherit;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#inherit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn inherit(self: Kirigami__Platform__PlatformTheme) bool {
        return qtc.Kirigami__Platform__PlatformTheme_Inherit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInherit` instead
    ///
    pub const SetInherit = setInherit;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setInherit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _inherit: bool `
    ///
    pub fn setInherit(self: Kirigami__Platform__PlatformTheme, _inherit: bool) void {
        qtc.Kirigami__Platform__PlatformTheme_SetInherit(@ptrCast(self.ptr), _inherit);
    }

    /// ### DEPRECATED: Use `textColor` instead
    ///
    pub const TextColor = textColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn textColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_TextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `disabledTextColor` instead
    ///
    pub const DisabledTextColor = disabledTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#disabledTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn disabledTextColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_DisabledTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `highlightedTextColor` instead
    ///
    pub const HighlightedTextColor = highlightedTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#highlightedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn highlightedTextColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_HighlightedTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeTextColor` instead
    ///
    pub const ActiveTextColor = activeTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#activeTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn activeTextColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_ActiveTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `linkColor` instead
    ///
    pub const LinkColor = linkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#linkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn linkColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_LinkColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `visitedLinkColor` instead
    ///
    pub const VisitedLinkColor = visitedLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#visitedLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn visitedLinkColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_VisitedLinkColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `negativeTextColor` instead
    ///
    pub const NegativeTextColor = negativeTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#negativeTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn negativeTextColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_NegativeTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `neutralTextColor` instead
    ///
    pub const NeutralTextColor = neutralTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#neutralTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn neutralTextColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_NeutralTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `positiveTextColor` instead
    ///
    pub const PositiveTextColor = positiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#positiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn positiveTextColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_PositiveTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn backgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `alternateBackgroundColor` instead
    ///
    pub const AlternateBackgroundColor = alternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#alternateBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn alternateBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_AlternateBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `highlightColor` instead
    ///
    pub const HighlightColor = highlightColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#highlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn highlightColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_HighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeBackgroundColor` instead
    ///
    pub const ActiveBackgroundColor = activeBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#activeBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn activeBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_ActiveBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `linkBackgroundColor` instead
    ///
    pub const LinkBackgroundColor = linkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#linkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn linkBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_LinkBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `visitedLinkBackgroundColor` instead
    ///
    pub const VisitedLinkBackgroundColor = visitedLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#visitedLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn visitedLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_VisitedLinkBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `negativeBackgroundColor` instead
    ///
    pub const NegativeBackgroundColor = negativeBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#negativeBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn negativeBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_NegativeBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `neutralBackgroundColor` instead
    ///
    pub const NeutralBackgroundColor = neutralBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#neutralBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn neutralBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_NeutralBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `positiveBackgroundColor` instead
    ///
    pub const PositiveBackgroundColor = positiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#positiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn positiveBackgroundColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_PositiveBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusColor` instead
    ///
    pub const FocusColor = focusColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#focusColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn focusColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_FocusColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hoverColor` instead
    ///
    pub const HoverColor = hoverColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#hoverColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn hoverColor(self: Kirigami__Platform__PlatformTheme) QColor {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_HoverColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#defaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn defaultFont(self: Kirigami__Platform__PlatformTheme) QFont {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_DefaultFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `smallFont` instead
    ///
    pub const SmallFont = smallFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#smallFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn smallFont(self: Kirigami__Platform__PlatformTheme) QFont {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_SmallFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn palette(self: Kirigami__Platform__PlatformTheme) QPalette {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameContrast` instead
    ///
    pub const FrameContrast = frameContrast;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#frameContrast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn frameContrast(self: Kirigami__Platform__PlatformTheme) f64 {
        return qtc.Kirigami__Platform__PlatformTheme_FrameContrast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lightFrameContrast` instead
    ///
    pub const LightFrameContrast = lightFrameContrast;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#lightFrameContrast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn lightFrameContrast(self: Kirigami__Platform__PlatformTheme) f64 {
        return qtc.Kirigami__Platform__PlatformTheme_LightFrameContrast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `iconFromTheme` instead
    ///
    pub const IconFromTheme = iconFromTheme;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#iconFromTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` name: []const u8 `
    ///
    /// ` customColor: QColor `
    ///
    pub fn iconFromTheme(self: Kirigami__Platform__PlatformTheme, name: []const u8, customColor: anytype) QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(customColor)._is_QColor;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_IconFromTheme(@ptrCast(self.ptr), name_str, @ptrCast(customColor.ptr)) };
    }

    /// ### DEPRECATED: Use `onIconFromTheme` instead
    ///
    pub const OnIconFromTheme = onIconFromTheme;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#iconFromTheme)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, name: [*:0]const u8, customColor: QColor) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIconFromTheme(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, [*:0]const u8, QColor) callconv(.c) QIcon) void {
        qtc.Kirigami__Platform__PlatformTheme_OnIconFromTheme(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIconFromTheme` instead
    ///
    pub const SuperIconFromTheme = superIconFromTheme;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#iconFromTheme)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` name: []const u8 `
    ///
    /// ` customColor: QColor `
    ///
    pub fn superIconFromTheme(self: Kirigami__Platform__PlatformTheme, name: []const u8, customColor: anytype) QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(customColor)._is_QColor;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_SuperIconFromTheme(@ptrCast(self.ptr), name_str, @ptrCast(customColor.ptr)) };
    }

    /// ### DEPRECATED: Use `supportsIconColoring` instead
    ///
    pub const SupportsIconColoring = supportsIconColoring;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#supportsIconColoring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn supportsIconColoring(self: Kirigami__Platform__PlatformTheme) bool {
        return qtc.Kirigami__Platform__PlatformTheme_SupportsIconColoring(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomTextColor` instead
    ///
    pub const SetCustomTextColor = setCustomTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomDisabledTextColor` instead
    ///
    pub const SetCustomDisabledTextColor = setCustomDisabledTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomDisabledTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomDisabledTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomDisabledTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomHighlightedTextColor` instead
    ///
    pub const SetCustomHighlightedTextColor = setCustomHighlightedTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomHighlightedTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomHighlightedTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomActiveTextColor` instead
    ///
    pub const SetCustomActiveTextColor = setCustomActiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomActiveTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomActiveTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomLinkColor` instead
    ///
    pub const SetCustomLinkColor = setCustomLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomLinkColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomLinkColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomVisitedLinkColor` instead
    ///
    pub const SetCustomVisitedLinkColor = setCustomVisitedLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomVisitedLinkColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNegativeTextColor` instead
    ///
    pub const SetCustomNegativeTextColor = setCustomNegativeTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomNegativeTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNegativeTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNeutralTextColor` instead
    ///
    pub const SetCustomNeutralTextColor = setCustomNeutralTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomNeutralTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNeutralTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomPositiveTextColor` instead
    ///
    pub const SetCustomPositiveTextColor = setCustomPositiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomPositiveTextColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomPositiveTextColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomBackgroundColor` instead
    ///
    pub const SetCustomBackgroundColor = setCustomBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomAlternateBackgroundColor` instead
    ///
    pub const SetCustomAlternateBackgroundColor = setCustomAlternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomAlternateBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomAlternateBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomAlternateBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomHighlightColor` instead
    ///
    pub const SetCustomHighlightColor = setCustomHighlightColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomHighlightColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomHighlightColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomActiveBackgroundColor` instead
    ///
    pub const SetCustomActiveBackgroundColor = setCustomActiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomActiveBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomActiveBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomLinkBackgroundColor` instead
    ///
    pub const SetCustomLinkBackgroundColor = setCustomLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomLinkBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomVisitedLinkBackgroundColor` instead
    ///
    pub const SetCustomVisitedLinkBackgroundColor = setCustomVisitedLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomVisitedLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNegativeBackgroundColor` instead
    ///
    pub const SetCustomNegativeBackgroundColor = setCustomNegativeBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomNegativeBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNegativeBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNeutralBackgroundColor` instead
    ///
    pub const SetCustomNeutralBackgroundColor = setCustomNeutralBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomNeutralBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNeutralBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomPositiveBackgroundColor` instead
    ///
    pub const SetCustomPositiveBackgroundColor = setCustomPositiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomPositiveBackgroundColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomPositiveBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomFocusColor` instead
    ///
    pub const SetCustomFocusColor = setCustomFocusColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomFocusColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomFocusColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomFocusColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomHoverColor` instead
    ///
    pub const SetCustomHoverColor = setCustomHoverColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHoverColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn setCustomHoverColor(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_SetCustomHoverColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `useAlternateBackgroundColor` instead
    ///
    pub const UseAlternateBackgroundColor = useAlternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#useAlternateBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn useAlternateBackgroundColor(self: Kirigami__Platform__PlatformTheme) bool {
        return qtc.Kirigami__Platform__PlatformTheme_UseAlternateBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUseAlternateBackgroundColor` instead
    ///
    pub const SetUseAlternateBackgroundColor = setUseAlternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setUseAlternateBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` alternate: bool `
    ///
    pub fn setUseAlternateBackgroundColor(self: Kirigami__Platform__PlatformTheme, alternate: bool) void {
        qtc.Kirigami__Platform__PlatformTheme_SetUseAlternateBackgroundColor(@ptrCast(self.ptr), alternate);
    }

    /// ### DEPRECATED: Use `qmlAttachedProperties` instead
    ///
    pub const QmlAttachedProperties = qmlAttachedProperties;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#qmlAttachedProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    pub fn qmlAttachedProperties(object: anytype) Kirigami__Platform__PlatformTheme {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_QmlAttachedProperties(@ptrCast(object.ptr)) };
    }

    /// ### DEPRECATED: Use `colorsChanged` instead
    ///
    pub const ColorsChanged = colorsChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn colorsChanged(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_ColorsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorsChanged` instead
    ///
    pub const OnColorsChanged = onColorsChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme) callconv(.c) void `
    ///
    pub fn onColorsChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_ColorsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultFontChanged` instead
    ///
    pub const DefaultFontChanged = defaultFontChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#defaultFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` font: QFont `
    ///
    pub fn defaultFontChanged(self: Kirigami__Platform__PlatformTheme, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.Kirigami__Platform__PlatformTheme_DefaultFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultFontChanged` instead
    ///
    pub const OnDefaultFontChanged = onDefaultFontChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#defaultFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, font: QFont) callconv(.c) void `
    ///
    pub fn onDefaultFontChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QFont) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_DefaultFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `smallFontChanged` instead
    ///
    pub const SmallFontChanged = smallFontChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#smallFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` font: QFont `
    ///
    pub fn smallFontChanged(self: Kirigami__Platform__PlatformTheme, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.Kirigami__Platform__PlatformTheme_SmallFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onSmallFontChanged` instead
    ///
    pub const OnSmallFontChanged = onSmallFontChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#smallFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, font: QFont) callconv(.c) void `
    ///
    pub fn onSmallFontChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QFont) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_SmallFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorSetChanged` instead
    ///
    pub const ColorSetChanged = colorSetChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _colorSet: platformtheme_enums.ColorSet `
    ///
    pub fn colorSetChanged(self: Kirigami__Platform__PlatformTheme, _colorSet: i32) void {
        qtc.Kirigami__Platform__PlatformTheme_ColorSetChanged(@ptrCast(self.ptr), @bitCast(_colorSet));
    }

    /// ### DEPRECATED: Use `onColorSetChanged` instead
    ///
    pub const OnColorSetChanged = onColorSetChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, colorSet: platformtheme_enums.ColorSet) callconv(.c) void `
    ///
    pub fn onColorSetChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, i32) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_ColorSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorGroupChanged` instead
    ///
    pub const ColorGroupChanged = colorGroupChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorGroupChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _colorGroup: platformtheme_enums.ColorGroup `
    ///
    pub fn colorGroupChanged(self: Kirigami__Platform__PlatformTheme, _colorGroup: i32) void {
        qtc.Kirigami__Platform__PlatformTheme_ColorGroupChanged(@ptrCast(self.ptr), @bitCast(_colorGroup));
    }

    /// ### DEPRECATED: Use `onColorGroupChanged` instead
    ///
    pub const OnColorGroupChanged = onColorGroupChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorGroupChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, colorGroup: platformtheme_enums.ColorGroup) callconv(.c) void `
    ///
    pub fn onColorGroupChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, i32) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_ColorGroupChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteChanged` instead
    ///
    pub const PaletteChanged = paletteChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` pal: QPalette `
    ///
    pub fn paletteChanged(self: Kirigami__Platform__PlatformTheme, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.Kirigami__Platform__PlatformTheme_PaletteChanged(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteChanged` instead
    ///
    pub const OnPaletteChanged = onPaletteChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, pal: QPalette) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QPalette) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inheritChanged` instead
    ///
    pub const InheritChanged = inheritChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#inheritChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _inherit: bool `
    ///
    pub fn inheritChanged(self: Kirigami__Platform__PlatformTheme, _inherit: bool) void {
        qtc.Kirigami__Platform__PlatformTheme_InheritChanged(@ptrCast(self.ptr), _inherit);
    }

    /// ### DEPRECATED: Use `onInheritChanged` instead
    ///
    pub const OnInheritChanged = onInheritChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#inheritChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, inherit: bool) callconv(.c) void `
    ///
    pub fn onInheritChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, bool) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_InheritChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useAlternateBackgroundColorChanged` instead
    ///
    pub const UseAlternateBackgroundColorChanged = useAlternateBackgroundColorChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#useAlternateBackgroundColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` alternate: bool `
    ///
    pub fn useAlternateBackgroundColorChanged(self: Kirigami__Platform__PlatformTheme, alternate: bool) void {
        qtc.Kirigami__Platform__PlatformTheme_UseAlternateBackgroundColorChanged(@ptrCast(self.ptr), alternate);
    }

    /// ### DEPRECATED: Use `onUseAlternateBackgroundColorChanged` instead
    ///
    pub const OnUseAlternateBackgroundColorChanged = onUseAlternateBackgroundColorChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#useAlternateBackgroundColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, alternate: bool) callconv(.c) void `
    ///
    pub fn onUseAlternateBackgroundColorChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, bool) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_Connect_UseAlternateBackgroundColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSupportsIconColoring` instead
    ///
    pub const SetSupportsIconColoring = setSupportsIconColoring;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSupportsIconColoring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` support: bool `
    ///
    pub fn setSupportsIconColoring(self: Kirigami__Platform__PlatformTheme, support: bool) void {
        qtc.Kirigami__Platform__PlatformTheme_SetSupportsIconColoring(@ptrCast(self.ptr), support);
    }

    /// ### DEPRECATED: Use `onSetSupportsIconColoring` instead
    ///
    pub const OnSetSupportsIconColoring = onSetSupportsIconColoring;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSupportsIconColoring)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, support: bool) callconv(.c) void `
    ///
    pub fn onSetSupportsIconColoring(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, bool) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetSupportsIconColoring(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportsIconColoring` instead
    ///
    pub const SuperSetSupportsIconColoring = superSetSupportsIconColoring;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSupportsIconColoring)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` support: bool `
    ///
    pub fn superSetSupportsIconColoring(self: Kirigami__Platform__PlatformTheme, support: bool) void {
        qtc.Kirigami__Platform__PlatformTheme_SuperSetSupportsIconColoring(@ptrCast(self.ptr), support);
    }

    /// ### DEPRECATED: Use `setTextColor` instead
    ///
    pub const SetTextColor = setTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetTextColor` instead
    ///
    pub const OnSetTextColor = onSetTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTextColor` instead
    ///
    pub const SuperSetTextColor = superSetTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setDisabledTextColor` instead
    ///
    pub const SetDisabledTextColor = setDisabledTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDisabledTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setDisabledTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetDisabledTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetDisabledTextColor` instead
    ///
    pub const OnSetDisabledTextColor = onSetDisabledTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDisabledTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetDisabledTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetDisabledTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDisabledTextColor` instead
    ///
    pub const SuperSetDisabledTextColor = superSetDisabledTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDisabledTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetDisabledTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetDisabledTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightedTextColor` instead
    ///
    pub const SetHighlightedTextColor = setHighlightedTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setHighlightedTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetHighlightedTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetHighlightedTextColor` instead
    ///
    pub const OnSetHighlightedTextColor = onSetHighlightedTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightedTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetHighlightedTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetHighlightedTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHighlightedTextColor` instead
    ///
    pub const SuperSetHighlightedTextColor = superSetHighlightedTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightedTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetHighlightedTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetHighlightedTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setActiveTextColor` instead
    ///
    pub const SetActiveTextColor = setActiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setActiveTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetActiveTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetActiveTextColor` instead
    ///
    pub const OnSetActiveTextColor = onSetActiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetActiveTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetActiveTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetActiveTextColor` instead
    ///
    pub const SuperSetActiveTextColor = superSetActiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetActiveTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetActiveTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setLinkColor` instead
    ///
    pub const SetLinkColor = setLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setLinkColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetLinkColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetLinkColor` instead
    ///
    pub const OnSetLinkColor = onSetLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetLinkColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetLinkColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLinkColor` instead
    ///
    pub const SuperSetLinkColor = superSetLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetLinkColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetLinkColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setVisitedLinkColor` instead
    ///
    pub const SetVisitedLinkColor = setVisitedLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setVisitedLinkColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetVisitedLinkColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetVisitedLinkColor` instead
    ///
    pub const OnSetVisitedLinkColor = onSetVisitedLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetVisitedLinkColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetVisitedLinkColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVisitedLinkColor` instead
    ///
    pub const SuperSetVisitedLinkColor = superSetVisitedLinkColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetVisitedLinkColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetVisitedLinkColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setNegativeTextColor` instead
    ///
    pub const SetNegativeTextColor = setNegativeTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setNegativeTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetNegativeTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetNegativeTextColor` instead
    ///
    pub const OnSetNegativeTextColor = onSetNegativeTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetNegativeTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetNegativeTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetNegativeTextColor` instead
    ///
    pub const SuperSetNegativeTextColor = superSetNegativeTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetNegativeTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetNegativeTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setNeutralTextColor` instead
    ///
    pub const SetNeutralTextColor = setNeutralTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setNeutralTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetNeutralTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetNeutralTextColor` instead
    ///
    pub const OnSetNeutralTextColor = onSetNeutralTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetNeutralTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetNeutralTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetNeutralTextColor` instead
    ///
    pub const SuperSetNeutralTextColor = superSetNeutralTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetNeutralTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetNeutralTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setPositiveTextColor` instead
    ///
    pub const SetPositiveTextColor = setPositiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setPositiveTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetPositiveTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetPositiveTextColor` instead
    ///
    pub const OnSetPositiveTextColor = onSetPositiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveTextColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetPositiveTextColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetPositiveTextColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPositiveTextColor` instead
    ///
    pub const SuperSetPositiveTextColor = superSetPositiveTextColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveTextColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetPositiveTextColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetPositiveTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetBackgroundColor` instead
    ///
    pub const OnSetBackgroundColor = onSetBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBackgroundColor` instead
    ///
    pub const SuperSetBackgroundColor = superSetBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setAlternateBackgroundColor` instead
    ///
    pub const SetAlternateBackgroundColor = setAlternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setAlternateBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setAlternateBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetAlternateBackgroundColor` instead
    ///
    pub const OnSetAlternateBackgroundColor = onSetAlternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setAlternateBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetAlternateBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetAlternateBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAlternateBackgroundColor` instead
    ///
    pub const SuperSetAlternateBackgroundColor = superSetAlternateBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setAlternateBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetAlternateBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetAlternateBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightColor` instead
    ///
    pub const SetHighlightColor = setHighlightColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setHighlightColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetHighlightColor` instead
    ///
    pub const OnSetHighlightColor = onSetHighlightColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetHighlightColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetHighlightColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHighlightColor` instead
    ///
    pub const SuperSetHighlightColor = superSetHighlightColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetHighlightColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setActiveBackgroundColor` instead
    ///
    pub const SetActiveBackgroundColor = setActiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setActiveBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetActiveBackgroundColor` instead
    ///
    pub const OnSetActiveBackgroundColor = onSetActiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetActiveBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetActiveBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetActiveBackgroundColor` instead
    ///
    pub const SuperSetActiveBackgroundColor = superSetActiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetActiveBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetActiveBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setLinkBackgroundColor` instead
    ///
    pub const SetLinkBackgroundColor = setLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetLinkBackgroundColor` instead
    ///
    pub const OnSetLinkBackgroundColor = onSetLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetLinkBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLinkBackgroundColor` instead
    ///
    pub const SuperSetLinkBackgroundColor = superSetLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetLinkBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setVisitedLinkBackgroundColor` instead
    ///
    pub const SetVisitedLinkBackgroundColor = setVisitedLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setVisitedLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetVisitedLinkBackgroundColor` instead
    ///
    pub const OnSetVisitedLinkBackgroundColor = onSetVisitedLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetVisitedLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetVisitedLinkBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVisitedLinkBackgroundColor` instead
    ///
    pub const SuperSetVisitedLinkBackgroundColor = superSetVisitedLinkBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetVisitedLinkBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetVisitedLinkBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setNegativeBackgroundColor` instead
    ///
    pub const SetNegativeBackgroundColor = setNegativeBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setNegativeBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetNegativeBackgroundColor` instead
    ///
    pub const OnSetNegativeBackgroundColor = onSetNegativeBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetNegativeBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetNegativeBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetNegativeBackgroundColor` instead
    ///
    pub const SuperSetNegativeBackgroundColor = superSetNegativeBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetNegativeBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetNegativeBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setNeutralBackgroundColor` instead
    ///
    pub const SetNeutralBackgroundColor = setNeutralBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setNeutralBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetNeutralBackgroundColor` instead
    ///
    pub const OnSetNeutralBackgroundColor = onSetNeutralBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetNeutralBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetNeutralBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetNeutralBackgroundColor` instead
    ///
    pub const SuperSetNeutralBackgroundColor = superSetNeutralBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetNeutralBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetNeutralBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setPositiveBackgroundColor` instead
    ///
    pub const SetPositiveBackgroundColor = setPositiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setPositiveBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetPositiveBackgroundColor` instead
    ///
    pub const OnSetPositiveBackgroundColor = onSetPositiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveBackgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetPositiveBackgroundColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetPositiveBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPositiveBackgroundColor` instead
    ///
    pub const SuperSetPositiveBackgroundColor = superSetPositiveBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveBackgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetPositiveBackgroundColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetPositiveBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setFocusColor` instead
    ///
    pub const SetFocusColor = setFocusColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setFocusColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setFocusColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetFocusColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetFocusColor` instead
    ///
    pub const OnSetFocusColor = onSetFocusColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setFocusColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetFocusColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetFocusColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFocusColor` instead
    ///
    pub const SuperSetFocusColor = superSetFocusColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setFocusColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetFocusColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetFocusColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setHoverColor` instead
    ///
    pub const SetHoverColor = setHoverColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHoverColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setHoverColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetHoverColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetHoverColor` instead
    ///
    pub const OnSetHoverColor = onSetHoverColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHoverColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, color: QColor) callconv(.c) void `
    ///
    pub fn onSetHoverColor(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QColor) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetHoverColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHoverColor` instead
    ///
    pub const SuperSetHoverColor = superSetHoverColor;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHoverColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn superSetHoverColor(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetHoverColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultFont` instead
    ///
    pub const SetDefaultFont = setDefaultFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDefaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _defaultFont: QFont `
    ///
    pub fn setDefaultFont(self: Kirigami__Platform__PlatformTheme, _defaultFont: anytype) void {
        comptime _ = @TypeOf(_defaultFont)._is_QFont;
        qtc.Kirigami__Platform__PlatformTheme_SetDefaultFont(@ptrCast(self.ptr), @ptrCast(_defaultFont.ptr));
    }

    /// ### DEPRECATED: Use `onSetDefaultFont` instead
    ///
    pub const OnSetDefaultFont = onSetDefaultFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDefaultFont)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, defaultFont: QFont) callconv(.c) void `
    ///
    pub fn onSetDefaultFont(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QFont) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetDefaultFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDefaultFont` instead
    ///
    pub const SuperSetDefaultFont = superSetDefaultFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDefaultFont)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _defaultFont: QFont `
    ///
    pub fn superSetDefaultFont(self: Kirigami__Platform__PlatformTheme, _defaultFont: anytype) void {
        comptime _ = @TypeOf(_defaultFont)._is_QFont;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetDefaultFont(@ptrCast(self.ptr), @ptrCast(_defaultFont.ptr));
    }

    /// ### DEPRECATED: Use `setSmallFont` instead
    ///
    pub const SetSmallFont = setSmallFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSmallFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _smallFont: QFont `
    ///
    pub fn setSmallFont(self: Kirigami__Platform__PlatformTheme, _smallFont: anytype) void {
        comptime _ = @TypeOf(_smallFont)._is_QFont;
        qtc.Kirigami__Platform__PlatformTheme_SetSmallFont(@ptrCast(self.ptr), @ptrCast(_smallFont.ptr));
    }

    /// ### DEPRECATED: Use `onSetSmallFont` instead
    ///
    pub const OnSetSmallFont = onSetSmallFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSmallFont)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, smallFont: QFont) callconv(.c) void `
    ///
    pub fn onSetSmallFont(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QFont) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSetSmallFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSmallFont` instead
    ///
    pub const SuperSetSmallFont = superSetSmallFont;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSmallFont)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _smallFont: QFont `
    ///
    pub fn superSetSmallFont(self: Kirigami__Platform__PlatformTheme, _smallFont: anytype) void {
        comptime _ = @TypeOf(_smallFont)._is_QFont;
        qtc.Kirigami__Platform__PlatformTheme_SuperSetSmallFont(@ptrCast(self.ptr), @ptrCast(_smallFont.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Kirigami__Platform__PlatformTheme, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__PlatformTheme_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QEvent) callconv(.c) bool) void {
        qtc.Kirigami__Platform__PlatformTheme_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__PlatformTheme_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
        var _str = qtc.Kirigami__Platform__PlatformTheme_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__PlatformTheme.tr2: Memory allocation failed");
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
        var _str = qtc.Kirigami__Platform__PlatformTheme_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__PlatformTheme.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCustomTextColor1` instead
    ///
    pub const SetCustomTextColor1 = setCustomTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomDisabledTextColor1` instead
    ///
    pub const SetCustomDisabledTextColor1 = setCustomDisabledTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomDisabledTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomDisabledTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomDisabledTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomHighlightedTextColor1` instead
    ///
    pub const SetCustomHighlightedTextColor1 = setCustomHighlightedTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomHighlightedTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomHighlightedTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomActiveTextColor1` instead
    ///
    pub const SetCustomActiveTextColor1 = setCustomActiveTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomActiveTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomActiveTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomLinkColor1` instead
    ///
    pub const SetCustomLinkColor1 = setCustomLinkColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomLinkColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomLinkColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomVisitedLinkColor1` instead
    ///
    pub const SetCustomVisitedLinkColor1 = setCustomVisitedLinkColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomVisitedLinkColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNegativeTextColor1` instead
    ///
    pub const SetCustomNegativeTextColor1 = setCustomNegativeTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomNegativeTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNegativeTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNeutralTextColor1` instead
    ///
    pub const SetCustomNeutralTextColor1 = setCustomNeutralTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomNeutralTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNeutralTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomPositiveTextColor1` instead
    ///
    pub const SetCustomPositiveTextColor1 = setCustomPositiveTextColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomPositiveTextColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomPositiveTextColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomBackgroundColor1` instead
    ///
    pub const SetCustomBackgroundColor1 = setCustomBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomAlternateBackgroundColor1` instead
    ///
    pub const SetCustomAlternateBackgroundColor1 = setCustomAlternateBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomAlternateBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomAlternateBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomAlternateBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomHighlightColor1` instead
    ///
    pub const SetCustomHighlightColor1 = setCustomHighlightColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomHighlightColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomHighlightColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomActiveBackgroundColor1` instead
    ///
    pub const SetCustomActiveBackgroundColor1 = setCustomActiveBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomActiveBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomActiveBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomLinkBackgroundColor1` instead
    ///
    pub const SetCustomLinkBackgroundColor1 = setCustomLinkBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomLinkBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomLinkBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomVisitedLinkBackgroundColor1` instead
    ///
    pub const SetCustomVisitedLinkBackgroundColor1 = setCustomVisitedLinkBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomVisitedLinkBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNegativeBackgroundColor1` instead
    ///
    pub const SetCustomNegativeBackgroundColor1 = setCustomNegativeBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomNegativeBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNegativeBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomNeutralBackgroundColor1` instead
    ///
    pub const SetCustomNeutralBackgroundColor1 = setCustomNeutralBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomNeutralBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomNeutralBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomPositiveBackgroundColor1` instead
    ///
    pub const SetCustomPositiveBackgroundColor1 = setCustomPositiveBackgroundColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomPositiveBackgroundColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomPositiveBackgroundColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomFocusColor1` instead
    ///
    pub const SetCustomFocusColor1 = setCustomFocusColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomFocusColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomFocusColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomFocusColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setCustomHoverColor1` instead
    ///
    pub const SetCustomHoverColor1 = setCustomHoverColor1;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHoverColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` color: QColor `
    ///
    pub fn setCustomHoverColor1(self: Kirigami__Platform__PlatformTheme, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Kirigami__Platform__PlatformTheme_SetCustomHoverColor1(@ptrCast(self.ptr), @ptrCast(color.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Kirigami__Platform__PlatformTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__PlatformTheme.objectName: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Kirigami__Platform__PlatformTheme, name: []const u8) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn isWidgetType(self: Kirigami__Platform__PlatformTheme) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn isWindowType(self: Kirigami__Platform__PlatformTheme) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn isQuickItemType(self: Kirigami__Platform__PlatformTheme) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn signalsBlocked(self: Kirigami__Platform__PlatformTheme) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Kirigami__Platform__PlatformTheme, b: bool) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn thread(self: Kirigami__Platform__PlatformTheme) QThread {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Kirigami__Platform__PlatformTheme, _thread: anytype) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Kirigami__Platform__PlatformTheme, interval: i32) i32 {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Kirigami__Platform__PlatformTheme, time: i64) i32 {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Kirigami__Platform__PlatformTheme, id: i32) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Kirigami__Platform__PlatformTheme, id: i32) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Kirigami__Platform__PlatformTheme, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Kirigami__Platform__PlatformTheme.children: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Kirigami__Platform__PlatformTheme, _parent: anytype) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Kirigami__Platform__PlatformTheme, filterObj: anytype) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Kirigami__Platform__PlatformTheme, obj: anytype) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Kirigami__Platform__PlatformTheme, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn disconnect3(self: Kirigami__Platform__PlatformTheme) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Kirigami__Platform__PlatformTheme, receiver: anytype) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn dumpObjectTree(self: Kirigami__Platform__PlatformTheme) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn dumpObjectInfo(self: Kirigami__Platform__PlatformTheme) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Kirigami__Platform__PlatformTheme, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Kirigami__Platform__PlatformTheme, name: [:0]const u8) QVariant {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Kirigami__Platform__PlatformTheme, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Kirigami__Platform__PlatformTheme.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Kirigami__Platform__PlatformTheme.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn bindingStorage(self: Kirigami__Platform__PlatformTheme) QBindingStorage {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn bindingStorage2(self: Kirigami__Platform__PlatformTheme) QBindingStorage {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn destroyed(self: Kirigami__Platform__PlatformTheme) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme) callconv(.c) void) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn parent(self: Kirigami__Platform__PlatformTheme) QObject {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Kirigami__Platform__PlatformTheme, classname: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn deleteLater(self: Kirigami__Platform__PlatformTheme) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Kirigami__Platform__PlatformTheme, interval: i32, timerType: i32) i32 {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Kirigami__Platform__PlatformTheme, time: i64, timerType: i32) i32 {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Kirigami__Platform__PlatformTheme, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Kirigami__Platform__PlatformTheme, signal: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Kirigami__Platform__PlatformTheme, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Kirigami__Platform__PlatformTheme, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Kirigami__Platform__PlatformTheme, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Kirigami__Platform__PlatformTheme, param1: anytype) void {
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Kirigami__Platform__PlatformTheme, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__PlatformTheme_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Kirigami__Platform__PlatformTheme, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__PlatformTheme_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QObject, QEvent) callconv(.c) bool) void {
        qtc.Kirigami__Platform__PlatformTheme_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Kirigami__Platform__PlatformTheme_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Kirigami__Platform__PlatformTheme_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QTimerEvent) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Kirigami__Platform__PlatformTheme_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Kirigami__Platform__PlatformTheme_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QChildEvent) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Kirigami__Platform__PlatformTheme_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Kirigami__Platform__PlatformTheme, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Kirigami__Platform__PlatformTheme_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QEvent) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Kirigami__Platform__PlatformTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__PlatformTheme_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Kirigami__Platform__PlatformTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__PlatformTheme_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QMetaMethod) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Kirigami__Platform__PlatformTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__PlatformTheme_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Kirigami__Platform__PlatformTheme, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__PlatformTheme_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QMetaMethod) callconv(.c) void) void {
        qtc.Kirigami__Platform__PlatformTheme_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn sender(self: Kirigami__Platform__PlatformTheme) QObject {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn superSender(self: Kirigami__Platform__PlatformTheme) QObject {
        return .{ .ptr = qtc.Kirigami__Platform__PlatformTheme_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Kirigami__Platform__PlatformTheme, callback: *const fn () callconv(.c) QObject) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn senderSignalIndex(self: Kirigami__Platform__PlatformTheme) i32 {
        return qtc.Kirigami__Platform__PlatformTheme_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn superSenderSignalIndex(self: Kirigami__Platform__PlatformTheme) i32 {
        return qtc.Kirigami__Platform__PlatformTheme_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Kirigami__Platform__PlatformTheme, callback: *const fn () callconv(.c) i32) void {
        qtc.Kirigami__Platform__PlatformTheme_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Kirigami__Platform__PlatformTheme, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Kirigami__Platform__PlatformTheme_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Kirigami__Platform__PlatformTheme, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Kirigami__Platform__PlatformTheme_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, [*:0]const u8) callconv(.c) i32) void {
        qtc.Kirigami__Platform__PlatformTheme_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Kirigami__Platform__PlatformTheme, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Kirigami__Platform__PlatformTheme_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Kirigami__Platform__PlatformTheme, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Kirigami__Platform__PlatformTheme_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, QMetaMethod) callconv(.c) bool) void {
        qtc.Kirigami__Platform__PlatformTheme_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__PlatformTheme, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Kirigami__Platform__PlatformTheme, callback: *const fn (Kirigami__Platform__PlatformTheme, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__PlatformTheme `
    ///
    pub fn delete(self: Kirigami__Platform__PlatformTheme) void {
        qtc.Kirigami__Platform__PlatformTheme_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html)
pub const Kirigami__Platform__PlatformThemeChangeTracker = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__PlatformThemeChangeTracker,

    pub const _is_Kirigami__Platform__PlatformThemeChangeTracker = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Kirigami::Platform::PlatformThemeChangeTracker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` theme: Kirigami__Platform__PlatformTheme `
    ///
    pub fn new(theme: anytype) Kirigami__Platform__PlatformThemeChangeTracker {
        comptime _ = @TypeOf(theme)._is_Kirigami__Platform__PlatformTheme;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformThemeChangeTracker_new(@ptrCast(theme.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Kirigami::Platform::PlatformThemeChangeTracker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Kirigami__Platform__PlatformThemeChangeTracker `
    ///
    pub fn new2(param1: anytype) Kirigami__Platform__PlatformThemeChangeTracker {
        comptime _ = @TypeOf(param1)._is_Kirigami__Platform__PlatformThemeChangeTracker;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformThemeChangeTracker_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Kirigami::Platform::PlatformThemeChangeTracker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` theme: Kirigami__Platform__PlatformTheme `
    ///
    /// ` changes: flag of platformtheme_enums.PropertyChange `
    ///
    pub fn new3(theme: anytype, changes: u8) Kirigami__Platform__PlatformThemeChangeTracker {
        comptime _ = @TypeOf(theme)._is_Kirigami__Platform__PlatformTheme;
        return .{ .ptr = qtc.Kirigami__Platform__PlatformThemeChangeTracker_new3(@ptrCast(theme.ptr), @bitCast(changes)) };
    }

    /// ### DEPRECATED: Use `markDirty` instead
    ///
    pub const MarkDirty = markDirty;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html#markDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformThemeChangeTracker `
    ///
    /// ` changes: flag of platformtheme_enums.PropertyChange `
    ///
    pub fn markDirty(self: Kirigami__Platform__PlatformThemeChangeTracker, changes: u8) void {
        qtc.Kirigami__Platform__PlatformThemeChangeTracker_MarkDirty(@ptrCast(self.ptr), @bitCast(changes));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__PlatformThemeChangeTracker `
    ///
    /// ` param1: Kirigami__Platform__PlatformThemeChangeTracker `
    ///
    pub fn operatorAssign(self: Kirigami__Platform__PlatformThemeChangeTracker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Kirigami__Platform__PlatformThemeChangeTracker;
        qtc.Kirigami__Platform__PlatformThemeChangeTracker_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__PlatformThemeChangeTracker `
    ///
    pub fn delete(self: Kirigami__Platform__PlatformThemeChangeTracker) void {
        qtc.Kirigami__Platform__PlatformThemeChangeTracker_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#public-types)
pub const enums = struct {
    pub const ColorSet = enum {
        pub const View: i32 = 0;
        pub const Window: i32 = 1;
        pub const Button: i32 = 2;
        pub const Selection: i32 = 3;
        pub const Tooltip: i32 = 4;
        pub const Complementary: i32 = 5;
        pub const Header: i32 = 6;
        pub const ColorSetCount: i32 = 7;
    };

    pub const ColorGroup = enum {
        pub const Disabled: i32 = 1;
        pub const Active: i32 = 0;
        pub const Inactive: i32 = 2;
        pub const Normal: i32 = 0;
        pub const ColorGroupCount: i32 = 1;
    };

    pub const PropertyChange = enum {
        pub const None: u8 = 0;
        pub const ColorSet: u8 = 1;
        pub const ColorGroup: u8 = 2;
        pub const Color: u8 = 4;
        pub const Palette: u8 = 8;
        pub const Font: u8 = 16;
        pub const Data: u8 = 32;
        pub const All: u8 = 63;
    };
};
