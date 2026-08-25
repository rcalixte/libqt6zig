const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QIcon = @import("libqt6").QIcon;
const QLocale = @import("libqt6").QLocale;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QPalette = @import("libqt6").QPalette;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qabstractspinbox_enums = @import("libqabstractspinbox.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qrubberband_enums = @import("libqrubberband.zig").enums;
const qslider_enums = @import("libqslider.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const qstyleoption_enums = enums;
const qtabbar_enums = @import("libqtabbar.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html)
pub const QStyleOption = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOption,

    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOption object in C++ memory
    ///
    pub fn new() QStyleOption {
        return .{ .ptr = qtc.QStyleOption_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOption `
    ///
    pub fn new2(other: anytype) QStyleOption {
        comptime _ = @TypeOf(other)._is_QStyleOption;
        return .{ .ptr = qtc.QStyleOption_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStyleOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _version: i32 `
    ///
    pub fn new3(_version: i32) QStyleOption {
        return .{ .ptr = qtc.QStyleOption_new3(@bitCast(_version)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStyleOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new4(_version: i32, typeVal: i32) QStyleOption {
        return .{ .ptr = qtc.QStyleOption_new4(@bitCast(_version), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn version(self: QStyleOption) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOption, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn type0(self: QStyleOption) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOption, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOption) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOption, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOption) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOption, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn rect(self: QStyleOption) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOption, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn fontMetrics(self: QStyleOption) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOption, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn palette(self: QStyleOption) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOption, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn styleObject(self: QStyleOption) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOption, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOption, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` other: QStyleOption `
    ///
    pub fn operatorAssign(self: QStyleOption, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStyleOption;
        qtc.QStyleOption_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOption `
    ///
    pub fn delete(self: QStyleOption) void {
        qtc.QStyleOption_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html)
pub const QStyleOptionFocusRect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionFocusRect,

    pub const _is_QStyleOptionFocusRect = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionFocusRect object in C++ memory
    ///
    pub fn new() QStyleOptionFocusRect {
        return .{ .ptr = qtc.QStyleOptionFocusRect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionFocusRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionFocusRect `
    ///
    pub fn new2(other: anytype) QStyleOptionFocusRect {
        comptime _ = @TypeOf(other)._is_QStyleOptionFocusRect;
        return .{ .ptr = qtc.QStyleOptionFocusRect_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn backgroundColor(self: QStyleOptionFocusRect) QColor {
        return .{ .ptr = qtc.QStyleOptionFocusRect_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _backgroundColor: QColor `
    ///
    pub fn setBackgroundColor(self: QStyleOptionFocusRect, _backgroundColor: anytype) void {
        comptime _ = @TypeOf(_backgroundColor)._is_QColor;
        qtc.QStyleOptionFocusRect_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(_backgroundColor.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` param1: QStyleOptionFocusRect `
    ///
    pub fn operatorAssign(self: QStyleOptionFocusRect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionFocusRect;
        qtc.QStyleOptionFocusRect_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn version(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionFocusRect, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn type0(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionFocusRect, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionFocusRect, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionFocusRect, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn rect(self: QStyleOptionFocusRect) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionFocusRect, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn fontMetrics(self: QStyleOptionFocusRect) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionFocusRect, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn palette(self: QStyleOptionFocusRect) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionFocusRect, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn styleObject(self: QStyleOptionFocusRect) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionFocusRect, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionFocusRect, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn delete(self: QStyleOptionFocusRect) void {
        qtc.QStyleOptionFocusRect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html)
pub const QStyleOptionFrame = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionFrame,

    pub const _is_QStyleOptionFrame = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionFrame object in C++ memory
    ///
    pub fn new() QStyleOptionFrame {
        return .{ .ptr = qtc.QStyleOptionFrame_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionFrame `
    ///
    pub fn new2(other: anytype) QStyleOptionFrame {
        comptime _ = @TypeOf(other)._is_QStyleOptionFrame;
        return .{ .ptr = qtc.QStyleOptionFrame_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn lineWidth(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QStyleOptionFrame, _lineWidth: i32) void {
        qtc.QStyleOptionFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(_lineWidth));
    }

    /// ### DEPRECATED: Use `midLineWidth` instead
    ///
    pub const MidLineWidth = midLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn midLineWidth(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMidLineWidth` instead
    ///
    pub const SetMidLineWidth = setMidLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QStyleOptionFrame, _midLineWidth: i32) void {
        qtc.QStyleOptionFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(_midLineWidth));
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn features(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _features: flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn setFeatures(self: QStyleOptionFrame, _features: i32) void {
        qtc.QStyleOptionFrame_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `frameShape` instead
    ///
    pub const FrameShape = frameShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameShape` instead
    ///
    pub const SetFrameShape = setFrameShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QStyleOptionFrame, _frameShape: i32) void {
        qtc.QStyleOptionFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(_frameShape));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` param1: QStyleOptionFrame `
    ///
    pub fn operatorAssign(self: QStyleOptionFrame, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionFrame;
        qtc.QStyleOptionFrame_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn version(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionFrame, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn type0(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionFrame, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionFrame, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionFrame, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn rect(self: QStyleOptionFrame) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionFrame, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn fontMetrics(self: QStyleOptionFrame) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionFrame, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn palette(self: QStyleOptionFrame) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionFrame, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn styleObject(self: QStyleOptionFrame) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionFrame, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionFrame, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn delete(self: QStyleOptionFrame) void {
        qtc.QStyleOptionFrame_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html)
pub const QStyleOptionTabWidgetFrame = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionTabWidgetFrame,

    pub const _is_QStyleOptionTabWidgetFrame = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionTabWidgetFrame object in C++ memory
    ///
    pub fn new() QStyleOptionTabWidgetFrame {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionTabWidgetFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTabWidgetFrame `
    ///
    pub fn new2(other: anytype) QStyleOptionTabWidgetFrame {
        comptime _ = @TypeOf(other)._is_QStyleOptionTabWidgetFrame;
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn lineWidth(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOptionTabWidgetFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QStyleOptionTabWidgetFrame, _lineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(_lineWidth));
    }

    /// ### DEPRECATED: Use `midLineWidth` instead
    ///
    pub const MidLineWidth = midLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn midLineWidth(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOptionTabWidgetFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMidLineWidth` instead
    ///
    pub const SetMidLineWidth = setMidLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QStyleOptionTabWidgetFrame, _midLineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(_midLineWidth));
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ## Returns:
    ///
    /// ` qtabbar_enums.Shape `
    ///
    pub fn shape(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOptionTabWidgetFrame_Shape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShape` instead
    ///
    pub const SetShape = setShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _shape: qtabbar_enums.Shape `
    ///
    pub fn setShape(self: QStyleOptionTabWidgetFrame, _shape: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetShape(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `tabBarSize` instead
    ///
    pub const TabBarSize = tabBarSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn tabBarSize(self: QStyleOptionTabWidgetFrame) QSize {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_TabBarSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTabBarSize` instead
    ///
    pub const SetTabBarSize = setTabBarSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _tabBarSize: QSize `
    ///
    pub fn setTabBarSize(self: QStyleOptionTabWidgetFrame, _tabBarSize: anytype) void {
        comptime _ = @TypeOf(_tabBarSize)._is_QSize;
        qtc.QStyleOptionTabWidgetFrame_SetTabBarSize(@ptrCast(self.ptr), @ptrCast(_tabBarSize.ptr));
    }

    /// ### DEPRECATED: Use `rightCornerWidgetSize` instead
    ///
    pub const RightCornerWidgetSize = rightCornerWidgetSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn rightCornerWidgetSize(self: QStyleOptionTabWidgetFrame) QSize {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_RightCornerWidgetSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRightCornerWidgetSize` instead
    ///
    pub const SetRightCornerWidgetSize = setRightCornerWidgetSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _rightCornerWidgetSize: QSize `
    ///
    pub fn setRightCornerWidgetSize(self: QStyleOptionTabWidgetFrame, _rightCornerWidgetSize: anytype) void {
        comptime _ = @TypeOf(_rightCornerWidgetSize)._is_QSize;
        qtc.QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(@ptrCast(self.ptr), @ptrCast(_rightCornerWidgetSize.ptr));
    }

    /// ### DEPRECATED: Use `leftCornerWidgetSize` instead
    ///
    pub const LeftCornerWidgetSize = leftCornerWidgetSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn leftCornerWidgetSize(self: QStyleOptionTabWidgetFrame) QSize {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLeftCornerWidgetSize` instead
    ///
    pub const SetLeftCornerWidgetSize = setLeftCornerWidgetSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _leftCornerWidgetSize: QSize `
    ///
    pub fn setLeftCornerWidgetSize(self: QStyleOptionTabWidgetFrame, _leftCornerWidgetSize: anytype) void {
        comptime _ = @TypeOf(_leftCornerWidgetSize)._is_QSize;
        qtc.QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(@ptrCast(self.ptr), @ptrCast(_leftCornerWidgetSize.ptr));
    }

    /// ### DEPRECATED: Use `tabBarRect` instead
    ///
    pub const TabBarRect = tabBarRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn tabBarRect(self: QStyleOptionTabWidgetFrame) QRect {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_TabBarRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTabBarRect` instead
    ///
    pub const SetTabBarRect = setTabBarRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _tabBarRect: QRect `
    ///
    pub fn setTabBarRect(self: QStyleOptionTabWidgetFrame, _tabBarRect: anytype) void {
        comptime _ = @TypeOf(_tabBarRect)._is_QRect;
        qtc.QStyleOptionTabWidgetFrame_SetTabBarRect(@ptrCast(self.ptr), @ptrCast(_tabBarRect.ptr));
    }

    /// ### DEPRECATED: Use `selectedTabRect` instead
    ///
    pub const SelectedTabRect = selectedTabRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn selectedTabRect(self: QStyleOptionTabWidgetFrame) QRect {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_SelectedTabRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedTabRect` instead
    ///
    pub const SetSelectedTabRect = setSelectedTabRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _selectedTabRect: QRect `
    ///
    pub fn setSelectedTabRect(self: QStyleOptionTabWidgetFrame, _selectedTabRect: anytype) void {
        comptime _ = @TypeOf(_selectedTabRect)._is_QRect;
        qtc.QStyleOptionTabWidgetFrame_SetSelectedTabRect(@ptrCast(self.ptr), @ptrCast(_selectedTabRect.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` param1: QStyleOptionTabWidgetFrame `
    ///
    pub fn operatorAssign(self: QStyleOptionTabWidgetFrame, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTabWidgetFrame;
        qtc.QStyleOptionTabWidgetFrame_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn version(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionTabWidgetFrame, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn type0(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionTabWidgetFrame, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionTabWidgetFrame, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionTabWidgetFrame, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn rect(self: QStyleOptionTabWidgetFrame) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionTabWidgetFrame, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn fontMetrics(self: QStyleOptionTabWidgetFrame) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionTabWidgetFrame, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn palette(self: QStyleOptionTabWidgetFrame) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionTabWidgetFrame, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn styleObject(self: QStyleOptionTabWidgetFrame) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionTabWidgetFrame, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionTabWidgetFrame, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn delete(self: QStyleOptionTabWidgetFrame) void {
        qtc.QStyleOptionTabWidgetFrame_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html)
pub const QStyleOptionTabBarBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionTabBarBase,

    pub const _is_QStyleOptionTabBarBase = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionTabBarBase object in C++ memory
    ///
    pub fn new() QStyleOptionTabBarBase {
        return .{ .ptr = qtc.QStyleOptionTabBarBase_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionTabBarBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTabBarBase `
    ///
    pub fn new2(other: anytype) QStyleOptionTabBarBase {
        comptime _ = @TypeOf(other)._is_QStyleOptionTabBarBase;
        return .{ .ptr = qtc.QStyleOptionTabBarBase_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qtabbar_enums.Shape `
    ///
    pub fn shape(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOptionTabBarBase_Shape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShape` instead
    ///
    pub const SetShape = setShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _shape: qtabbar_enums.Shape `
    ///
    pub fn setShape(self: QStyleOptionTabBarBase, _shape: i32) void {
        qtc.QStyleOptionTabBarBase_SetShape(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `tabBarRect` instead
    ///
    pub const TabBarRect = tabBarRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn tabBarRect(self: QStyleOptionTabBarBase) QRect {
        return .{ .ptr = qtc.QStyleOptionTabBarBase_TabBarRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTabBarRect` instead
    ///
    pub const SetTabBarRect = setTabBarRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _tabBarRect: QRect `
    ///
    pub fn setTabBarRect(self: QStyleOptionTabBarBase, _tabBarRect: anytype) void {
        comptime _ = @TypeOf(_tabBarRect)._is_QRect;
        qtc.QStyleOptionTabBarBase_SetTabBarRect(@ptrCast(self.ptr), @ptrCast(_tabBarRect.ptr));
    }

    /// ### DEPRECATED: Use `selectedTabRect` instead
    ///
    pub const SelectedTabRect = selectedTabRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn selectedTabRect(self: QStyleOptionTabBarBase) QRect {
        return .{ .ptr = qtc.QStyleOptionTabBarBase_SelectedTabRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedTabRect` instead
    ///
    pub const SetSelectedTabRect = setSelectedTabRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _selectedTabRect: QRect `
    ///
    pub fn setSelectedTabRect(self: QStyleOptionTabBarBase, _selectedTabRect: anytype) void {
        comptime _ = @TypeOf(_selectedTabRect)._is_QRect;
        qtc.QStyleOptionTabBarBase_SetSelectedTabRect(@ptrCast(self.ptr), @ptrCast(_selectedTabRect.ptr));
    }

    /// ### DEPRECATED: Use `documentMode` instead
    ///
    pub const DocumentMode = documentMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn documentMode(self: QStyleOptionTabBarBase) bool {
        return qtc.QStyleOptionTabBarBase_DocumentMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocumentMode` instead
    ///
    pub const SetDocumentMode = setDocumentMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _documentMode: bool `
    ///
    pub fn setDocumentMode(self: QStyleOptionTabBarBase, _documentMode: bool) void {
        qtc.QStyleOptionTabBarBase_SetDocumentMode(@ptrCast(self.ptr), _documentMode);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` param1: QStyleOptionTabBarBase `
    ///
    pub fn operatorAssign(self: QStyleOptionTabBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTabBarBase;
        qtc.QStyleOptionTabBarBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn version(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionTabBarBase, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn type0(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionTabBarBase, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionTabBarBase, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionTabBarBase, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn rect(self: QStyleOptionTabBarBase) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionTabBarBase, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn fontMetrics(self: QStyleOptionTabBarBase) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionTabBarBase, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn palette(self: QStyleOptionTabBarBase) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionTabBarBase, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn styleObject(self: QStyleOptionTabBarBase) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionTabBarBase, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionTabBarBase, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn delete(self: QStyleOptionTabBarBase) void {
        qtc.QStyleOptionTabBarBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html)
pub const QStyleOptionHeader = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionHeader,

    pub const _is_QStyleOptionHeader = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionHeader object in C++ memory
    ///
    pub fn new() QStyleOptionHeader {
        return .{ .ptr = qtc.QStyleOptionHeader_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionHeader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionHeader `
    ///
    pub fn new2(other: anytype) QStyleOptionHeader {
        comptime _ = @TypeOf(other)._is_QStyleOptionHeader;
        return .{ .ptr = qtc.QStyleOptionHeader_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `section` instead
    ///
    pub const Section = section;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn section(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSection` instead
    ///
    pub const SetSection = setSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _section: i32 `
    ///
    pub fn setSection(self: QStyleOptionHeader, _section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self.ptr), @bitCast(_section));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionHeader, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionHeader.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionHeader, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment(self: QStyleOptionHeader, _textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self.ptr), @bitCast(_textAlignment));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn icon(self: QStyleOptionHeader) QIcon {
        return .{ .ptr = qtc.QStyleOptionHeader_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionHeader, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `iconAlignment` instead
    ///
    pub const IconAlignment = iconAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn iconAlignment(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconAlignment` instead
    ///
    pub const SetIconAlignment = setIconAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _iconAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setIconAlignment(self: QStyleOptionHeader, _iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self.ptr), @bitCast(_iconAlignment));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SectionPosition `
    ///
    pub fn position(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _position: qstyleoption_enums.SectionPosition `
    ///
    pub fn setPosition(self: QStyleOptionHeader, _position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `selectedPosition` instead
    ///
    pub const SelectedPosition = selectedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn selectedPosition(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectedPosition` instead
    ///
    pub const SetSelectedPosition = setSelectedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn setSelectedPosition(self: QStyleOptionHeader, _selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(_selectedPosition));
    }

    /// ### DEPRECATED: Use `sortIndicator` instead
    ///
    pub const SortIndicator = sortIndicator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SortIndicator `
    ///
    pub fn sortIndicator(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortIndicator` instead
    ///
    pub const SetSortIndicator = setSortIndicator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _sortIndicator: qstyleoption_enums.SortIndicator `
    ///
    pub fn setSortIndicator(self: QStyleOptionHeader, _sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self.ptr), @bitCast(_sortIndicator));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QStyleOptionHeader, _orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` param1: QStyleOptionHeader `
    ///
    pub fn operatorAssign(self: QStyleOptionHeader, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionHeader;
        qtc.QStyleOptionHeader_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn version(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionHeader, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn type0(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionHeader, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionHeader, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionHeader, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn rect(self: QStyleOptionHeader) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionHeader, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn fontMetrics(self: QStyleOptionHeader) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionHeader, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn palette(self: QStyleOptionHeader) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionHeader, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn styleObject(self: QStyleOptionHeader) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionHeader, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionHeader, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn delete(self: QStyleOptionHeader) void {
        qtc.QStyleOptionHeader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html)
pub const QStyleOptionHeaderV2 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionHeaderV2,

    pub const _is_QStyleOptionHeaderV2 = {};
    pub const _is_QStyleOptionHeader = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionHeaderV2 object in C++ memory
    ///
    pub fn new() QStyleOptionHeaderV2 {
        return .{ .ptr = qtc.QStyleOptionHeaderV2_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionHeaderV2 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionHeaderV2 `
    ///
    pub fn new2(other: anytype) QStyleOptionHeaderV2 {
        comptime _ = @TypeOf(other)._is_QStyleOptionHeaderV2;
        return .{ .ptr = qtc.QStyleOptionHeaderV2_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` param1: QStyleOptionHeaderV2 `
    ///
    pub fn operatorAssign(self: QStyleOptionHeaderV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionHeaderV2;
        qtc.QStyleOptionHeaderV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `textElideMode` instead
    ///
    pub const TextElideMode = textElideMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn textElideMode(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeaderV2_TextElideMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextElideMode` instead
    ///
    pub const SetTextElideMode = setTextElideMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _textElideMode: qnamespace_enums.TextElideMode `
    ///
    pub fn setTextElideMode(self: QStyleOptionHeaderV2, _textElideMode: i32) void {
        qtc.QStyleOptionHeaderV2_SetTextElideMode(@ptrCast(self.ptr), @bitCast(_textElideMode));
    }

    /// ### DEPRECATED: Use `isSectionDragTarget` instead
    ///
    pub const IsSectionDragTarget = isSectionDragTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn isSectionDragTarget(self: QStyleOptionHeaderV2) bool {
        return qtc.QStyleOptionHeaderV2_IsSectionDragTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsSectionDragTarget` instead
    ///
    pub const SetIsSectionDragTarget = setIsSectionDragTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _isSectionDragTarget: bool `
    ///
    pub fn setIsSectionDragTarget(self: QStyleOptionHeaderV2, _isSectionDragTarget: bool) void {
        qtc.QStyleOptionHeaderV2_SetIsSectionDragTarget(@ptrCast(self.ptr), _isSectionDragTarget);
    }

    /// ### DEPRECATED: Use `unused` instead
    ///
    pub const Unused = unused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn unused(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeaderV2_Unused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnused` instead
    ///
    pub const SetUnused = setUnused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _unused: i32 `
    ///
    pub fn setUnused(self: QStyleOptionHeaderV2, _unused: i32) void {
        qtc.QStyleOptionHeaderV2_SetUnused(@ptrCast(self.ptr), @bitCast(_unused));
    }

    /// ### DEPRECATED: Use `section` instead
    ///
    pub const Section = section;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn section(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSection` instead
    ///
    pub const SetSection = setSection;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _section: i32 `
    ///
    pub fn setSection(self: QStyleOptionHeaderV2, _section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self.ptr), @bitCast(_section));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionHeaderV2, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionHeaderV2.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionHeaderV2, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment(self: QStyleOptionHeaderV2, _textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self.ptr), @bitCast(_textAlignment));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn icon(self: QStyleOptionHeaderV2) QIcon {
        return .{ .ptr = qtc.QStyleOptionHeader_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionHeaderV2, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `iconAlignment` instead
    ///
    pub const IconAlignment = iconAlignment;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn iconAlignment(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconAlignment` instead
    ///
    pub const SetIconAlignment = setIconAlignment;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _iconAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setIconAlignment(self: QStyleOptionHeaderV2, _iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self.ptr), @bitCast(_iconAlignment));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SectionPosition `
    ///
    pub fn position(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _position: qstyleoption_enums.SectionPosition `
    ///
    pub fn setPosition(self: QStyleOptionHeaderV2, _position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `selectedPosition` instead
    ///
    pub const SelectedPosition = selectedPosition;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn selectedPosition(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectedPosition` instead
    ///
    pub const SetSelectedPosition = setSelectedPosition;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn setSelectedPosition(self: QStyleOptionHeaderV2, _selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(_selectedPosition));
    }

    /// ### DEPRECATED: Use `sortIndicator` instead
    ///
    pub const SortIndicator = sortIndicator;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SortIndicator `
    ///
    pub fn sortIndicator(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortIndicator` instead
    ///
    pub const SetSortIndicator = setSortIndicator;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _sortIndicator: qstyleoption_enums.SortIndicator `
    ///
    pub fn setSortIndicator(self: QStyleOptionHeaderV2, _sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self.ptr), @bitCast(_sortIndicator));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QStyleOptionHeaderV2, _orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn version(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionHeaderV2, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn type0(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionHeaderV2, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionHeaderV2, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionHeaderV2, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn rect(self: QStyleOptionHeaderV2) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionHeaderV2, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn fontMetrics(self: QStyleOptionHeaderV2) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionHeaderV2, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn palette(self: QStyleOptionHeaderV2) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionHeaderV2, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn styleObject(self: QStyleOptionHeaderV2) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionHeaderV2, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionHeaderV2, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn delete(self: QStyleOptionHeaderV2) void {
        qtc.QStyleOptionHeaderV2_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html)
pub const QStyleOptionButton = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionButton,

    pub const _is_QStyleOptionButton = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionButton object in C++ memory
    ///
    pub fn new() QStyleOptionButton {
        return .{ .ptr = qtc.QStyleOptionButton_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionButton object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionButton `
    ///
    pub fn new2(other: anytype) QStyleOptionButton {
        comptime _ = @TypeOf(other)._is_QStyleOptionButton;
        return .{ .ptr = qtc.QStyleOptionButton_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ButtonFeature `
    ///
    pub fn features(self: QStyleOptionButton) i32 {
        return qtc.QStyleOptionButton_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _features: flag of qstyleoption_enums.ButtonFeature `
    ///
    pub fn setFeatures(self: QStyleOptionButton, _features: i32) void {
        qtc.QStyleOptionButton_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionButton, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionButton_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionButton.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionButton, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionButton_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn icon(self: QStyleOptionButton) QIcon {
        return .{ .ptr = qtc.QStyleOptionButton_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionButton, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionButton_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn iconSize(self: QStyleOptionButton) QSize {
        return .{ .ptr = qtc.QStyleOptionButton_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn setIconSize(self: QStyleOptionButton, _iconSize: anytype) void {
        comptime _ = @TypeOf(_iconSize)._is_QSize;
        qtc.QStyleOptionButton_SetIconSize(@ptrCast(self.ptr), @ptrCast(_iconSize.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` param1: QStyleOptionButton `
    ///
    pub fn operatorAssign(self: QStyleOptionButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionButton;
        qtc.QStyleOptionButton_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn version(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionButton, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn type0(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionButton, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionButton, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionButton, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn rect(self: QStyleOptionButton) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionButton, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn fontMetrics(self: QStyleOptionButton) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionButton, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn palette(self: QStyleOptionButton) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionButton, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn styleObject(self: QStyleOptionButton) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionButton, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionButton, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn delete(self: QStyleOptionButton) void {
        qtc.QStyleOptionButton_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html)
pub const QStyleOptionTab = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionTab,

    pub const _is_QStyleOptionTab = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionTab object in C++ memory
    ///
    pub fn new() QStyleOptionTab {
        return .{ .ptr = qtc.QStyleOptionTab_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionTab object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTab `
    ///
    pub fn new2(other: anytype) QStyleOptionTab {
        comptime _ = @TypeOf(other)._is_QStyleOptionTab;
        return .{ .ptr = qtc.QStyleOptionTab_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qtabbar_enums.Shape `
    ///
    pub fn shape(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Shape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShape` instead
    ///
    pub const SetShape = setShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _shape: qtabbar_enums.Shape `
    ///
    pub fn setShape(self: QStyleOptionTab, _shape: i32) void {
        qtc.QStyleOptionTab_SetShape(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionTab, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionTab_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionTab.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionTab, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionTab_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn icon(self: QStyleOptionTab) QIcon {
        return .{ .ptr = qtc.QStyleOptionTab_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionTab, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionTab_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn row(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Row(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _row: i32 `
    ///
    pub fn setRow(self: QStyleOptionTab, _row: i32) void {
        qtc.QStyleOptionTab_SetRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.TabPosition `
    ///
    pub fn position(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _position: qstyleoption_enums.TabPosition `
    ///
    pub fn setPosition(self: QStyleOptionTab, _position: i32) void {
        qtc.QStyleOptionTab_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `selectedPosition` instead
    ///
    pub const SelectedPosition = selectedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn selectedPosition(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectedPosition` instead
    ///
    pub const SetSelectedPosition = setSelectedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn setSelectedPosition(self: QStyleOptionTab, _selectedPosition: i32) void {
        qtc.QStyleOptionTab_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(_selectedPosition));
    }

    /// ### DEPRECATED: Use `cornerWidgets` instead
    ///
    pub const CornerWidgets = cornerWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.CornerWidget `
    ///
    pub fn cornerWidgets(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_CornerWidgets(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCornerWidgets` instead
    ///
    pub const SetCornerWidgets = setCornerWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _cornerWidgets: flag of qstyleoption_enums.CornerWidget `
    ///
    pub fn setCornerWidgets(self: QStyleOptionTab, _cornerWidgets: i32) void {
        qtc.QStyleOptionTab_SetCornerWidgets(@ptrCast(self.ptr), @bitCast(_cornerWidgets));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn iconSize(self: QStyleOptionTab) QSize {
        return .{ .ptr = qtc.QStyleOptionTab_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn setIconSize(self: QStyleOptionTab, _iconSize: anytype) void {
        comptime _ = @TypeOf(_iconSize)._is_QSize;
        qtc.QStyleOptionTab_SetIconSize(@ptrCast(self.ptr), @ptrCast(_iconSize.ptr));
    }

    /// ### DEPRECATED: Use `documentMode` instead
    ///
    pub const DocumentMode = documentMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn documentMode(self: QStyleOptionTab) bool {
        return qtc.QStyleOptionTab_DocumentMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocumentMode` instead
    ///
    pub const SetDocumentMode = setDocumentMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _documentMode: bool `
    ///
    pub fn setDocumentMode(self: QStyleOptionTab, _documentMode: bool) void {
        qtc.QStyleOptionTab_SetDocumentMode(@ptrCast(self.ptr), _documentMode);
    }

    /// ### DEPRECATED: Use `leftButtonSize` instead
    ///
    pub const LeftButtonSize = leftButtonSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn leftButtonSize(self: QStyleOptionTab) QSize {
        return .{ .ptr = qtc.QStyleOptionTab_LeftButtonSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLeftButtonSize` instead
    ///
    pub const SetLeftButtonSize = setLeftButtonSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _leftButtonSize: QSize `
    ///
    pub fn setLeftButtonSize(self: QStyleOptionTab, _leftButtonSize: anytype) void {
        comptime _ = @TypeOf(_leftButtonSize)._is_QSize;
        qtc.QStyleOptionTab_SetLeftButtonSize(@ptrCast(self.ptr), @ptrCast(_leftButtonSize.ptr));
    }

    /// ### DEPRECATED: Use `rightButtonSize` instead
    ///
    pub const RightButtonSize = rightButtonSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn rightButtonSize(self: QStyleOptionTab) QSize {
        return .{ .ptr = qtc.QStyleOptionTab_RightButtonSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRightButtonSize` instead
    ///
    pub const SetRightButtonSize = setRightButtonSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _rightButtonSize: QSize `
    ///
    pub fn setRightButtonSize(self: QStyleOptionTab, _rightButtonSize: anytype) void {
        comptime _ = @TypeOf(_rightButtonSize)._is_QSize;
        qtc.QStyleOptionTab_SetRightButtonSize(@ptrCast(self.ptr), @ptrCast(_rightButtonSize.ptr));
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.TabFeature `
    ///
    pub fn features(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _features: flag of qstyleoption_enums.TabFeature `
    ///
    pub fn setFeatures(self: QStyleOptionTab, _features: i32) void {
        qtc.QStyleOptionTab_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `tabIndex` instead
    ///
    pub const TabIndex = tabIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn tabIndex(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_TabIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabIndex` instead
    ///
    pub const SetTabIndex = setTabIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _tabIndex: i32 `
    ///
    pub fn setTabIndex(self: QStyleOptionTab, _tabIndex: i32) void {
        qtc.QStyleOptionTab_SetTabIndex(@ptrCast(self.ptr), @bitCast(_tabIndex));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` param1: QStyleOptionTab `
    ///
    pub fn operatorAssign(self: QStyleOptionTab, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTab;
        qtc.QStyleOptionTab_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn version(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionTab, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn type0(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionTab, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionTab, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionTab, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn rect(self: QStyleOptionTab) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionTab, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn fontMetrics(self: QStyleOptionTab) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionTab, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn palette(self: QStyleOptionTab) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionTab, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn styleObject(self: QStyleOptionTab) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionTab, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionTab, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn delete(self: QStyleOptionTab) void {
        qtc.QStyleOptionTab_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html)
pub const QStyleOptionToolBar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionToolBar,

    pub const _is_QStyleOptionToolBar = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionToolBar object in C++ memory
    ///
    pub fn new() QStyleOptionToolBar {
        return .{ .ptr = qtc.QStyleOptionToolBar_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionToolBar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionToolBar `
    ///
    pub fn new2(other: anytype) QStyleOptionToolBar {
        comptime _ = @TypeOf(other)._is_QStyleOptionToolBar;
        return .{ .ptr = qtc.QStyleOptionToolBar_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `positionOfLine` instead
    ///
    pub const PositionOfLine = positionOfLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.ToolBarPosition `
    ///
    pub fn positionOfLine(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_PositionOfLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPositionOfLine` instead
    ///
    pub const SetPositionOfLine = setPositionOfLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _positionOfLine: qstyleoption_enums.ToolBarPosition `
    ///
    pub fn setPositionOfLine(self: QStyleOptionToolBar, _positionOfLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionOfLine(@ptrCast(self.ptr), @bitCast(_positionOfLine));
    }

    /// ### DEPRECATED: Use `positionWithinLine` instead
    ///
    pub const PositionWithinLine = positionWithinLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.ToolBarPosition `
    ///
    pub fn positionWithinLine(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_PositionWithinLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPositionWithinLine` instead
    ///
    pub const SetPositionWithinLine = setPositionWithinLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _positionWithinLine: qstyleoption_enums.ToolBarPosition `
    ///
    pub fn setPositionWithinLine(self: QStyleOptionToolBar, _positionWithinLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionWithinLine(@ptrCast(self.ptr), @bitCast(_positionWithinLine));
    }

    /// ### DEPRECATED: Use `toolBarArea` instead
    ///
    pub const ToolBarArea = toolBarArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolBarArea `
    ///
    pub fn toolBarArea(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_ToolBarArea(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolBarArea` instead
    ///
    pub const SetToolBarArea = setToolBarArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _toolBarArea: qnamespace_enums.ToolBarArea `
    ///
    pub fn setToolBarArea(self: QStyleOptionToolBar, _toolBarArea: i32) void {
        qtc.QStyleOptionToolBar_SetToolBarArea(@ptrCast(self.ptr), @bitCast(_toolBarArea));
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ToolBarFeature `
    ///
    pub fn features(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _features: flag of qstyleoption_enums.ToolBarFeature `
    ///
    pub fn setFeatures(self: QStyleOptionToolBar, _features: i32) void {
        qtc.QStyleOptionToolBar_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn lineWidth(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QStyleOptionToolBar, _lineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetLineWidth(@ptrCast(self.ptr), @bitCast(_lineWidth));
    }

    /// ### DEPRECATED: Use `midLineWidth` instead
    ///
    pub const MidLineWidth = midLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn midLineWidth(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMidLineWidth` instead
    ///
    pub const SetMidLineWidth = setMidLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QStyleOptionToolBar, _midLineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(_midLineWidth));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` param1: QStyleOptionToolBar `
    ///
    pub fn operatorAssign(self: QStyleOptionToolBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionToolBar;
        qtc.QStyleOptionToolBar_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn version(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionToolBar, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn type0(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionToolBar, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionToolBar, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionToolBar, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn rect(self: QStyleOptionToolBar) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionToolBar, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn fontMetrics(self: QStyleOptionToolBar) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionToolBar, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn palette(self: QStyleOptionToolBar) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionToolBar, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn styleObject(self: QStyleOptionToolBar) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionToolBar, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionToolBar, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn delete(self: QStyleOptionToolBar) void {
        qtc.QStyleOptionToolBar_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html)
pub const QStyleOptionProgressBar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionProgressBar,

    pub const _is_QStyleOptionProgressBar = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionProgressBar object in C++ memory
    ///
    pub fn new() QStyleOptionProgressBar {
        return .{ .ptr = qtc.QStyleOptionProgressBar_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionProgressBar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionProgressBar `
    ///
    pub fn new2(other: anytype) QStyleOptionProgressBar {
        comptime _ = @TypeOf(other)._is_QStyleOptionProgressBar;
        return .{ .ptr = qtc.QStyleOptionProgressBar_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `minimum` instead
    ///
    pub const Minimum = minimum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn minimum(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_Minimum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimum` instead
    ///
    pub const SetMinimum = setMinimum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _minimum: i32 `
    ///
    pub fn setMinimum(self: QStyleOptionProgressBar, _minimum: i32) void {
        qtc.QStyleOptionProgressBar_SetMinimum(@ptrCast(self.ptr), @bitCast(_minimum));
    }

    /// ### DEPRECATED: Use `maximum` instead
    ///
    pub const Maximum = maximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn maximum(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_Maximum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximum` instead
    ///
    pub const SetMaximum = setMaximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _maximum: i32 `
    ///
    pub fn setMaximum(self: QStyleOptionProgressBar, _maximum: i32) void {
        qtc.QStyleOptionProgressBar_SetMaximum(@ptrCast(self.ptr), @bitCast(_maximum));
    }

    /// ### DEPRECATED: Use `progress` instead
    ///
    pub const Progress = progress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn progress(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_Progress(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProgress` instead
    ///
    pub const SetProgress = setProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _progress: i32 `
    ///
    pub fn setProgress(self: QStyleOptionProgressBar, _progress: i32) void {
        qtc.QStyleOptionProgressBar_SetProgress(@ptrCast(self.ptr), @bitCast(_progress));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionProgressBar, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionProgressBar_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionProgressBar.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionProgressBar, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionProgressBar_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment(self: QStyleOptionProgressBar, _textAlignment: i32) void {
        qtc.QStyleOptionProgressBar_SetTextAlignment(@ptrCast(self.ptr), @bitCast(_textAlignment));
    }

    /// ### DEPRECATED: Use `textVisible` instead
    ///
    pub const TextVisible = textVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn textVisible(self: QStyleOptionProgressBar) bool {
        return qtc.QStyleOptionProgressBar_TextVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextVisible` instead
    ///
    pub const SetTextVisible = setTextVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _textVisible: bool `
    ///
    pub fn setTextVisible(self: QStyleOptionProgressBar, _textVisible: bool) void {
        qtc.QStyleOptionProgressBar_SetTextVisible(@ptrCast(self.ptr), _textVisible);
    }

    /// ### DEPRECATED: Use `invertedAppearance` instead
    ///
    pub const InvertedAppearance = invertedAppearance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn invertedAppearance(self: QStyleOptionProgressBar) bool {
        return qtc.QStyleOptionProgressBar_InvertedAppearance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInvertedAppearance` instead
    ///
    pub const SetInvertedAppearance = setInvertedAppearance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _invertedAppearance: bool `
    ///
    pub fn setInvertedAppearance(self: QStyleOptionProgressBar, _invertedAppearance: bool) void {
        qtc.QStyleOptionProgressBar_SetInvertedAppearance(@ptrCast(self.ptr), _invertedAppearance);
    }

    /// ### DEPRECATED: Use `bottomToTop` instead
    ///
    pub const BottomToTop = bottomToTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn bottomToTop(self: QStyleOptionProgressBar) bool {
        return qtc.QStyleOptionProgressBar_BottomToTop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomToTop` instead
    ///
    pub const SetBottomToTop = setBottomToTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _bottomToTop: bool `
    ///
    pub fn setBottomToTop(self: QStyleOptionProgressBar, _bottomToTop: bool) void {
        qtc.QStyleOptionProgressBar_SetBottomToTop(@ptrCast(self.ptr), _bottomToTop);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` param1: QStyleOptionProgressBar `
    ///
    pub fn operatorAssign(self: QStyleOptionProgressBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionProgressBar;
        qtc.QStyleOptionProgressBar_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn version(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionProgressBar, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn type0(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionProgressBar, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionProgressBar, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionProgressBar, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn rect(self: QStyleOptionProgressBar) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionProgressBar, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn fontMetrics(self: QStyleOptionProgressBar) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionProgressBar, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn palette(self: QStyleOptionProgressBar) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionProgressBar, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn styleObject(self: QStyleOptionProgressBar) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionProgressBar, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionProgressBar, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn delete(self: QStyleOptionProgressBar) void {
        qtc.QStyleOptionProgressBar_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html)
pub const QStyleOptionMenuItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionMenuItem,

    pub const _is_QStyleOptionMenuItem = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionMenuItem object in C++ memory
    ///
    pub fn new() QStyleOptionMenuItem {
        return .{ .ptr = qtc.QStyleOptionMenuItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionMenuItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionMenuItem `
    ///
    pub fn new2(other: anytype) QStyleOptionMenuItem {
        comptime _ = @TypeOf(other)._is_QStyleOptionMenuItem;
        return .{ .ptr = qtc.QStyleOptionMenuItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `menuItemType` instead
    ///
    pub const MenuItemType = menuItemType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.MenuItemType `
    ///
    pub fn menuItemType(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_MenuItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuItemType` instead
    ///
    pub const SetMenuItemType = setMenuItemType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _menuItemType: qstyleoption_enums.MenuItemType `
    ///
    pub fn setMenuItemType(self: QStyleOptionMenuItem, _menuItemType: i32) void {
        qtc.QStyleOptionMenuItem_SetMenuItemType(@ptrCast(self.ptr), @bitCast(_menuItemType));
    }

    /// ### DEPRECATED: Use `checkType` instead
    ///
    pub const CheckType = checkType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.CheckType `
    ///
    pub fn checkType(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_CheckType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckType` instead
    ///
    pub const SetCheckType = setCheckType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _checkType: qstyleoption_enums.CheckType `
    ///
    pub fn setCheckType(self: QStyleOptionMenuItem, _checkType: i32) void {
        qtc.QStyleOptionMenuItem_SetCheckType(@ptrCast(self.ptr), @bitCast(_checkType));
    }

    /// ### DEPRECATED: Use `checked` instead
    ///
    pub const Checked = checked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn checked(self: QStyleOptionMenuItem) bool {
        return qtc.QStyleOptionMenuItem_Checked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _checked: bool `
    ///
    pub fn setChecked(self: QStyleOptionMenuItem, _checked: bool) void {
        qtc.QStyleOptionMenuItem_SetChecked(@ptrCast(self.ptr), _checked);
    }

    /// ### DEPRECATED: Use `menuHasCheckableItems` instead
    ///
    pub const MenuHasCheckableItems = menuHasCheckableItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn menuHasCheckableItems(self: QStyleOptionMenuItem) bool {
        return qtc.QStyleOptionMenuItem_MenuHasCheckableItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuHasCheckableItems` instead
    ///
    pub const SetMenuHasCheckableItems = setMenuHasCheckableItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _menuHasCheckableItems: bool `
    ///
    pub fn setMenuHasCheckableItems(self: QStyleOptionMenuItem, _menuHasCheckableItems: bool) void {
        qtc.QStyleOptionMenuItem_SetMenuHasCheckableItems(@ptrCast(self.ptr), _menuHasCheckableItems);
    }

    /// ### DEPRECATED: Use `menuRect` instead
    ///
    pub const MenuRect = menuRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn menuRect(self: QStyleOptionMenuItem) QRect {
        return .{ .ptr = qtc.QStyleOptionMenuItem_MenuRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMenuRect` instead
    ///
    pub const SetMenuRect = setMenuRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _menuRect: QRect `
    ///
    pub fn setMenuRect(self: QStyleOptionMenuItem, _menuRect: anytype) void {
        comptime _ = @TypeOf(_menuRect)._is_QRect;
        qtc.QStyleOptionMenuItem_SetMenuRect(@ptrCast(self.ptr), @ptrCast(_menuRect.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionMenuItem, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionMenuItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionMenuItem.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionMenuItem, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionMenuItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn icon(self: QStyleOptionMenuItem) QIcon {
        return .{ .ptr = qtc.QStyleOptionMenuItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionMenuItem, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionMenuItem_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `maxIconWidth` instead
    ///
    pub const MaxIconWidth = maxIconWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn maxIconWidth(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_MaxIconWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxIconWidth` instead
    ///
    pub const SetMaxIconWidth = setMaxIconWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _maxIconWidth: i32 `
    ///
    pub fn setMaxIconWidth(self: QStyleOptionMenuItem, _maxIconWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetMaxIconWidth(@ptrCast(self.ptr), @bitCast(_maxIconWidth));
    }

    /// ### DEPRECATED: Use `reservedShortcutWidth` instead
    ///
    pub const ReservedShortcutWidth = reservedShortcutWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn reservedShortcutWidth(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_ReservedShortcutWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReservedShortcutWidth` instead
    ///
    pub const SetReservedShortcutWidth = setReservedShortcutWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _reservedShortcutWidth: i32 `
    ///
    pub fn setReservedShortcutWidth(self: QStyleOptionMenuItem, _reservedShortcutWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetReservedShortcutWidth(@ptrCast(self.ptr), @bitCast(_reservedShortcutWidth));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn font(self: QStyleOptionMenuItem) QFont {
        return .{ .ptr = qtc.QStyleOptionMenuItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QStyleOptionMenuItem, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QStyleOptionMenuItem_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` param1: QStyleOptionMenuItem `
    ///
    pub fn operatorAssign(self: QStyleOptionMenuItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionMenuItem;
        qtc.QStyleOptionMenuItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn version(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionMenuItem, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn type0(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionMenuItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionMenuItem, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionMenuItem, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn rect(self: QStyleOptionMenuItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionMenuItem, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn fontMetrics(self: QStyleOptionMenuItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionMenuItem, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn palette(self: QStyleOptionMenuItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionMenuItem, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn styleObject(self: QStyleOptionMenuItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionMenuItem, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionMenuItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn delete(self: QStyleOptionMenuItem) void {
        qtc.QStyleOptionMenuItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html)
pub const QStyleOptionDockWidget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionDockWidget,

    pub const _is_QStyleOptionDockWidget = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionDockWidget object in C++ memory
    ///
    pub fn new() QStyleOptionDockWidget {
        return .{ .ptr = qtc.QStyleOptionDockWidget_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionDockWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionDockWidget `
    ///
    pub fn new2(other: anytype) QStyleOptionDockWidget {
        comptime _ = @TypeOf(other)._is_QStyleOptionDockWidget;
        return .{ .ptr = qtc.QStyleOptionDockWidget_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QStyleOptionDockWidget, allocator: std.mem.Allocator) []const u8 {
        var title_str = qtc.QStyleOptionDockWidget_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&title_str);
        const title_ret = allocator.alloc(u8, title_str.len) catch @panic("QStyleOptionDockWidget.title: Memory allocation failed");
        @memcpy(title_ret, title_str.data[0..title_str.len]);
        return title_ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QStyleOptionDockWidget, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QStyleOptionDockWidget_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `closable` instead
    ///
    pub const Closable = closable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn closable(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_Closable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClosable` instead
    ///
    pub const SetClosable = setClosable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _closable: bool `
    ///
    pub fn setClosable(self: QStyleOptionDockWidget, _closable: bool) void {
        qtc.QStyleOptionDockWidget_SetClosable(@ptrCast(self.ptr), _closable);
    }

    /// ### DEPRECATED: Use `movable` instead
    ///
    pub const Movable = movable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn movable(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_Movable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMovable` instead
    ///
    pub const SetMovable = setMovable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _movable: bool `
    ///
    pub fn setMovable(self: QStyleOptionDockWidget, _movable: bool) void {
        qtc.QStyleOptionDockWidget_SetMovable(@ptrCast(self.ptr), _movable);
    }

    /// ### DEPRECATED: Use `floatable` instead
    ///
    pub const Floatable = floatable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn floatable(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_Floatable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFloatable` instead
    ///
    pub const SetFloatable = setFloatable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _floatable: bool `
    ///
    pub fn setFloatable(self: QStyleOptionDockWidget, _floatable: bool) void {
        qtc.QStyleOptionDockWidget_SetFloatable(@ptrCast(self.ptr), _floatable);
    }

    /// ### DEPRECATED: Use `verticalTitleBar` instead
    ///
    pub const VerticalTitleBar = verticalTitleBar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn verticalTitleBar(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_VerticalTitleBar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalTitleBar` instead
    ///
    pub const SetVerticalTitleBar = setVerticalTitleBar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _verticalTitleBar: bool `
    ///
    pub fn setVerticalTitleBar(self: QStyleOptionDockWidget, _verticalTitleBar: bool) void {
        qtc.QStyleOptionDockWidget_SetVerticalTitleBar(@ptrCast(self.ptr), _verticalTitleBar);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` param1: QStyleOptionDockWidget `
    ///
    pub fn operatorAssign(self: QStyleOptionDockWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionDockWidget;
        qtc.QStyleOptionDockWidget_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn version(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionDockWidget, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn type0(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionDockWidget, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionDockWidget, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionDockWidget, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn rect(self: QStyleOptionDockWidget) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionDockWidget, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn fontMetrics(self: QStyleOptionDockWidget) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionDockWidget, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn palette(self: QStyleOptionDockWidget) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionDockWidget, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn styleObject(self: QStyleOptionDockWidget) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionDockWidget, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionDockWidget, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn delete(self: QStyleOptionDockWidget) void {
        qtc.QStyleOptionDockWidget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html)
pub const QStyleOptionViewItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionViewItem,

    pub const _is_QStyleOptionViewItem = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionViewItem object in C++ memory
    ///
    pub fn new() QStyleOptionViewItem {
        return .{ .ptr = qtc.QStyleOptionViewItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionViewItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionViewItem `
    ///
    pub fn new2(other: anytype) QStyleOptionViewItem {
        comptime _ = @TypeOf(other)._is_QStyleOptionViewItem;
        return .{ .ptr = qtc.QStyleOptionViewItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `displayAlignment` instead
    ///
    pub const DisplayAlignment = displayAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn displayAlignment(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_DisplayAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisplayAlignment` instead
    ///
    pub const SetDisplayAlignment = setDisplayAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _displayAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setDisplayAlignment(self: QStyleOptionViewItem, _displayAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDisplayAlignment(@ptrCast(self.ptr), @bitCast(_displayAlignment));
    }

    /// ### DEPRECATED: Use `decorationAlignment` instead
    ///
    pub const DecorationAlignment = decorationAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn decorationAlignment(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_DecorationAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDecorationAlignment` instead
    ///
    pub const SetDecorationAlignment = setDecorationAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _decorationAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setDecorationAlignment(self: QStyleOptionViewItem, _decorationAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationAlignment(@ptrCast(self.ptr), @bitCast(_decorationAlignment));
    }

    /// ### DEPRECATED: Use `textElideMode` instead
    ///
    pub const TextElideMode = textElideMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn textElideMode(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_TextElideMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextElideMode` instead
    ///
    pub const SetTextElideMode = setTextElideMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _textElideMode: qnamespace_enums.TextElideMode `
    ///
    pub fn setTextElideMode(self: QStyleOptionViewItem, _textElideMode: i32) void {
        qtc.QStyleOptionViewItem_SetTextElideMode(@ptrCast(self.ptr), @bitCast(_textElideMode));
    }

    /// ### DEPRECATED: Use `decorationPosition` instead
    ///
    pub const DecorationPosition = decorationPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.Position `
    ///
    pub fn decorationPosition(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_DecorationPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDecorationPosition` instead
    ///
    pub const SetDecorationPosition = setDecorationPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _decorationPosition: qstyleoption_enums.Position `
    ///
    pub fn setDecorationPosition(self: QStyleOptionViewItem, _decorationPosition: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationPosition(@ptrCast(self.ptr), @bitCast(_decorationPosition));
    }

    /// ### DEPRECATED: Use `decorationSize` instead
    ///
    pub const DecorationSize = decorationSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn decorationSize(self: QStyleOptionViewItem) QSize {
        return .{ .ptr = qtc.QStyleOptionViewItem_DecorationSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDecorationSize` instead
    ///
    pub const SetDecorationSize = setDecorationSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _decorationSize: QSize `
    ///
    pub fn setDecorationSize(self: QStyleOptionViewItem, _decorationSize: anytype) void {
        comptime _ = @TypeOf(_decorationSize)._is_QSize;
        qtc.QStyleOptionViewItem_SetDecorationSize(@ptrCast(self.ptr), @ptrCast(_decorationSize.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn font(self: QStyleOptionViewItem) QFont {
        return .{ .ptr = qtc.QStyleOptionViewItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QStyleOptionViewItem, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QStyleOptionViewItem_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `showDecorationSelected` instead
    ///
    pub const ShowDecorationSelected = showDecorationSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn showDecorationSelected(self: QStyleOptionViewItem) bool {
        return qtc.QStyleOptionViewItem_ShowDecorationSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowDecorationSelected` instead
    ///
    pub const SetShowDecorationSelected = setShowDecorationSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _showDecorationSelected: bool `
    ///
    pub fn setShowDecorationSelected(self: QStyleOptionViewItem, _showDecorationSelected: bool) void {
        qtc.QStyleOptionViewItem_SetShowDecorationSelected(@ptrCast(self.ptr), _showDecorationSelected);
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ViewItemFeature `
    ///
    pub fn features(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _features: flag of qstyleoption_enums.ViewItemFeature `
    ///
    pub fn setFeatures(self: QStyleOptionViewItem, _features: i32) void {
        qtc.QStyleOptionViewItem_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn locale(self: QStyleOptionViewItem) QLocale {
        return .{ .ptr = qtc.QStyleOptionViewItem_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QStyleOptionViewItem, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QStyleOptionViewItem_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn widget(self: QStyleOptionViewItem) QWidget {
        return .{ .ptr = qtc.QStyleOptionViewItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QStyleOptionViewItem, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QStyleOptionViewItem_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn index(self: QStyleOptionViewItem) QModelIndex {
        return .{ .ptr = qtc.QStyleOptionViewItem_Index(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIndex` instead
    ///
    pub const SetIndex = setIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn setIndex(self: QStyleOptionViewItem, _index: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        qtc.QStyleOptionViewItem_SetIndex(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `checkState` instead
    ///
    pub const CheckState = checkState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn checkState(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_CheckState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckState` instead
    ///
    pub const SetCheckState = setCheckState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _checkState: qnamespace_enums.CheckState `
    ///
    pub fn setCheckState(self: QStyleOptionViewItem, _checkState: i32) void {
        qtc.QStyleOptionViewItem_SetCheckState(@ptrCast(self.ptr), @bitCast(_checkState));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn icon(self: QStyleOptionViewItem) QIcon {
        return .{ .ptr = qtc.QStyleOptionViewItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionViewItem, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionViewItem_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionViewItem, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionViewItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionViewItem.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionViewItem, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionViewItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `viewItemPosition` instead
    ///
    pub const ViewItemPosition = viewItemPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.ViewItemPosition `
    ///
    pub fn viewItemPosition(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_ViewItemPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setViewItemPosition` instead
    ///
    pub const SetViewItemPosition = setViewItemPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _viewItemPosition: qstyleoption_enums.ViewItemPosition `
    ///
    pub fn setViewItemPosition(self: QStyleOptionViewItem, _viewItemPosition: i32) void {
        qtc.QStyleOptionViewItem_SetViewItemPosition(@ptrCast(self.ptr), @bitCast(_viewItemPosition));
    }

    /// ### DEPRECATED: Use `backgroundBrush` instead
    ///
    pub const BackgroundBrush = backgroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn backgroundBrush(self: QStyleOptionViewItem) QBrush {
        return .{ .ptr = qtc.QStyleOptionViewItem_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundBrush` instead
    ///
    pub const SetBackgroundBrush = setBackgroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _backgroundBrush: QBrush `
    ///
    pub fn setBackgroundBrush(self: QStyleOptionViewItem, _backgroundBrush: anytype) void {
        comptime _ = @TypeOf(_backgroundBrush)._is_QBrush;
        qtc.QStyleOptionViewItem_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(_backgroundBrush.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` param1: QStyleOptionViewItem `
    ///
    pub fn operatorAssign(self: QStyleOptionViewItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionViewItem;
        qtc.QStyleOptionViewItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn version(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionViewItem, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn type0(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionViewItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionViewItem, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionViewItem, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn rect(self: QStyleOptionViewItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionViewItem, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn fontMetrics(self: QStyleOptionViewItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionViewItem, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn palette(self: QStyleOptionViewItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionViewItem, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn styleObject(self: QStyleOptionViewItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionViewItem, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionViewItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn delete(self: QStyleOptionViewItem) void {
        qtc.QStyleOptionViewItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html)
pub const QStyleOptionToolBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionToolBox,

    pub const _is_QStyleOptionToolBox = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionToolBox object in C++ memory
    ///
    pub fn new() QStyleOptionToolBox {
        return .{ .ptr = qtc.QStyleOptionToolBox_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionToolBox object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionToolBox `
    ///
    pub fn new2(other: anytype) QStyleOptionToolBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionToolBox;
        return .{ .ptr = qtc.QStyleOptionToolBox_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionToolBox, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionToolBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionToolBox.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionToolBox, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionToolBox_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn icon(self: QStyleOptionToolBox) QIcon {
        return .{ .ptr = qtc.QStyleOptionToolBox_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionToolBox, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionToolBox_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.TabPosition `
    ///
    pub fn position(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOptionToolBox_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _position: qstyleoption_enums.TabPosition `
    ///
    pub fn setPosition(self: QStyleOptionToolBox, _position: i32) void {
        qtc.QStyleOptionToolBox_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `selectedPosition` instead
    ///
    pub const SelectedPosition = selectedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn selectedPosition(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOptionToolBox_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectedPosition` instead
    ///
    pub const SetSelectedPosition = setSelectedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn setSelectedPosition(self: QStyleOptionToolBox, _selectedPosition: i32) void {
        qtc.QStyleOptionToolBox_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(_selectedPosition));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` param1: QStyleOptionToolBox `
    ///
    pub fn operatorAssign(self: QStyleOptionToolBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionToolBox;
        qtc.QStyleOptionToolBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn version(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionToolBox, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn type0(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionToolBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionToolBox, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionToolBox, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn rect(self: QStyleOptionToolBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionToolBox, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn fontMetrics(self: QStyleOptionToolBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionToolBox, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn palette(self: QStyleOptionToolBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionToolBox, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn styleObject(self: QStyleOptionToolBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionToolBox, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionToolBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn delete(self: QStyleOptionToolBox) void {
        qtc.QStyleOptionToolBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html)
pub const QStyleOptionRubberBand = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionRubberBand,

    pub const _is_QStyleOptionRubberBand = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionRubberBand object in C++ memory
    ///
    pub fn new() QStyleOptionRubberBand {
        return .{ .ptr = qtc.QStyleOptionRubberBand_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionRubberBand object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionRubberBand `
    ///
    pub fn new2(other: anytype) QStyleOptionRubberBand {
        comptime _ = @TypeOf(other)._is_QStyleOptionRubberBand;
        return .{ .ptr = qtc.QStyleOptionRubberBand_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ## Returns:
    ///
    /// ` qrubberband_enums.Shape `
    ///
    pub fn shape(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOptionRubberBand_Shape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShape` instead
    ///
    pub const SetShape = setShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _shape: qrubberband_enums.Shape `
    ///
    pub fn setShape(self: QStyleOptionRubberBand, _shape: i32) void {
        qtc.QStyleOptionRubberBand_SetShape(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `opaque0` instead
    ///
    pub const Opaque = opaque0;

    pub const @"opaque" = opaque0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn opaque0(self: QStyleOptionRubberBand) bool {
        return qtc.QStyleOptionRubberBand_Opaque(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpaque` instead
    ///
    pub const SetOpaque = setOpaque;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _opaque: bool `
    ///
    pub fn setOpaque(self: QStyleOptionRubberBand, _opaque: bool) void {
        qtc.QStyleOptionRubberBand_SetOpaque(@ptrCast(self.ptr), _opaque);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` param1: QStyleOptionRubberBand `
    ///
    pub fn operatorAssign(self: QStyleOptionRubberBand, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionRubberBand;
        qtc.QStyleOptionRubberBand_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn version(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionRubberBand, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn type0(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionRubberBand, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionRubberBand, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionRubberBand, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn rect(self: QStyleOptionRubberBand) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionRubberBand, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn fontMetrics(self: QStyleOptionRubberBand) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionRubberBand, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn palette(self: QStyleOptionRubberBand) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionRubberBand, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn styleObject(self: QStyleOptionRubberBand) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionRubberBand, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionRubberBand, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn delete(self: QStyleOptionRubberBand) void {
        qtc.QStyleOptionRubberBand_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html)
pub const QStyleOptionComplex = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionComplex,

    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionComplex object in C++ memory
    ///
    pub fn new() QStyleOptionComplex {
        return .{ .ptr = qtc.QStyleOptionComplex_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionComplex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionComplex `
    ///
    pub fn new2(other: anytype) QStyleOptionComplex {
        comptime _ = @TypeOf(other)._is_QStyleOptionComplex;
        return .{ .ptr = qtc.QStyleOptionComplex_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStyleOptionComplex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _version: i32 `
    ///
    pub fn new3(_version: i32) QStyleOptionComplex {
        return .{ .ptr = qtc.QStyleOptionComplex_new3(@bitCast(_version)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStyleOptionComplex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new4(_version: i32, typeVal: i32) QStyleOptionComplex {
        return .{ .ptr = qtc.QStyleOptionComplex_new4(@bitCast(_version), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionComplex, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionComplex, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` param1: QStyleOptionComplex `
    ///
    pub fn operatorAssign(self: QStyleOptionComplex, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionComplex;
        qtc.QStyleOptionComplex_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn version(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionComplex, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn type0(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionComplex, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionComplex, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionComplex, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn rect(self: QStyleOptionComplex) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionComplex, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn fontMetrics(self: QStyleOptionComplex) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionComplex, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn palette(self: QStyleOptionComplex) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionComplex, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn styleObject(self: QStyleOptionComplex) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionComplex, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionComplex, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn delete(self: QStyleOptionComplex) void {
        qtc.QStyleOptionComplex_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html)
pub const QStyleOptionSlider = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionSlider,

    pub const _is_QStyleOptionSlider = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionSlider object in C++ memory
    ///
    pub fn new() QStyleOptionSlider {
        return .{ .ptr = qtc.QStyleOptionSlider_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionSlider object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionSlider `
    ///
    pub fn new2(other: anytype) QStyleOptionSlider {
        comptime _ = @TypeOf(other)._is_QStyleOptionSlider;
        return .{ .ptr = qtc.QStyleOptionSlider_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QStyleOptionSlider, _orientation: i32) void {
        qtc.QStyleOptionSlider_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `minimum` instead
    ///
    pub const Minimum = minimum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn minimum(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_Minimum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimum` instead
    ///
    pub const SetMinimum = setMinimum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _minimum: i32 `
    ///
    pub fn setMinimum(self: QStyleOptionSlider, _minimum: i32) void {
        qtc.QStyleOptionSlider_SetMinimum(@ptrCast(self.ptr), @bitCast(_minimum));
    }

    /// ### DEPRECATED: Use `maximum` instead
    ///
    pub const Maximum = maximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn maximum(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_Maximum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximum` instead
    ///
    pub const SetMaximum = setMaximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _maximum: i32 `
    ///
    pub fn setMaximum(self: QStyleOptionSlider, _maximum: i32) void {
        qtc.QStyleOptionSlider_SetMaximum(@ptrCast(self.ptr), @bitCast(_maximum));
    }

    /// ### DEPRECATED: Use `tickPosition` instead
    ///
    pub const TickPosition = tickPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` qslider_enums.TickPosition `
    ///
    pub fn tickPosition(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_TickPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickPosition` instead
    ///
    pub const SetTickPosition = setTickPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _tickPosition: qslider_enums.TickPosition `
    ///
    pub fn setTickPosition(self: QStyleOptionSlider, _tickPosition: i32) void {
        qtc.QStyleOptionSlider_SetTickPosition(@ptrCast(self.ptr), @bitCast(_tickPosition));
    }

    /// ### DEPRECATED: Use `tickInterval` instead
    ///
    pub const TickInterval = tickInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn tickInterval(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_TickInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickInterval` instead
    ///
    pub const SetTickInterval = setTickInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _tickInterval: i32 `
    ///
    pub fn setTickInterval(self: QStyleOptionSlider, _tickInterval: i32) void {
        qtc.QStyleOptionSlider_SetTickInterval(@ptrCast(self.ptr), @bitCast(_tickInterval));
    }

    /// ### DEPRECATED: Use `upsideDown` instead
    ///
    pub const UpsideDown = upsideDown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn upsideDown(self: QStyleOptionSlider) bool {
        return qtc.QStyleOptionSlider_UpsideDown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUpsideDown` instead
    ///
    pub const SetUpsideDown = setUpsideDown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _upsideDown: bool `
    ///
    pub fn setUpsideDown(self: QStyleOptionSlider, _upsideDown: bool) void {
        qtc.QStyleOptionSlider_SetUpsideDown(@ptrCast(self.ptr), _upsideDown);
    }

    /// ### DEPRECATED: Use `sliderPosition` instead
    ///
    pub const SliderPosition = sliderPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn sliderPosition(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_SliderPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliderPosition` instead
    ///
    pub const SetSliderPosition = setSliderPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _sliderPosition: i32 `
    ///
    pub fn setSliderPosition(self: QStyleOptionSlider, _sliderPosition: i32) void {
        qtc.QStyleOptionSlider_SetSliderPosition(@ptrCast(self.ptr), @bitCast(_sliderPosition));
    }

    /// ### DEPRECATED: Use `sliderValue` instead
    ///
    pub const SliderValue = sliderValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn sliderValue(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_SliderValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliderValue` instead
    ///
    pub const SetSliderValue = setSliderValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _sliderValue: i32 `
    ///
    pub fn setSliderValue(self: QStyleOptionSlider, _sliderValue: i32) void {
        qtc.QStyleOptionSlider_SetSliderValue(@ptrCast(self.ptr), @bitCast(_sliderValue));
    }

    /// ### DEPRECATED: Use `singleStep` instead
    ///
    pub const SingleStep = singleStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn singleStep(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_SingleStep(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSingleStep` instead
    ///
    pub const SetSingleStep = setSingleStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _singleStep: i32 `
    ///
    pub fn setSingleStep(self: QStyleOptionSlider, _singleStep: i32) void {
        qtc.QStyleOptionSlider_SetSingleStep(@ptrCast(self.ptr), @bitCast(_singleStep));
    }

    /// ### DEPRECATED: Use `pageStep` instead
    ///
    pub const PageStep = pageStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn pageStep(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_PageStep(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPageStep` instead
    ///
    pub const SetPageStep = setPageStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _pageStep: i32 `
    ///
    pub fn setPageStep(self: QStyleOptionSlider, _pageStep: i32) void {
        qtc.QStyleOptionSlider_SetPageStep(@ptrCast(self.ptr), @bitCast(_pageStep));
    }

    /// ### DEPRECATED: Use `notchTarget` instead
    ///
    pub const NotchTarget = notchTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn notchTarget(self: QStyleOptionSlider) f64 {
        return qtc.QStyleOptionSlider_NotchTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNotchTarget` instead
    ///
    pub const SetNotchTarget = setNotchTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _notchTarget: f64 `
    ///
    pub fn setNotchTarget(self: QStyleOptionSlider, _notchTarget: f64) void {
        qtc.QStyleOptionSlider_SetNotchTarget(@ptrCast(self.ptr), @bitCast(_notchTarget));
    }

    /// ### DEPRECATED: Use `dialWrapping` instead
    ///
    pub const DialWrapping = dialWrapping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn dialWrapping(self: QStyleOptionSlider) bool {
        return qtc.QStyleOptionSlider_DialWrapping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDialWrapping` instead
    ///
    pub const SetDialWrapping = setDialWrapping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _dialWrapping: bool `
    ///
    pub fn setDialWrapping(self: QStyleOptionSlider, _dialWrapping: bool) void {
        qtc.QStyleOptionSlider_SetDialWrapping(@ptrCast(self.ptr), _dialWrapping);
    }

    /// ### DEPRECATED: Use `keyboardModifiers` instead
    ///
    pub const KeyboardModifiers = keyboardModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn keyboardModifiers(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardModifiers` instead
    ///
    pub const SetKeyboardModifiers = setKeyboardModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _keyboardModifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setKeyboardModifiers(self: QStyleOptionSlider, _keyboardModifiers: i32) void {
        qtc.QStyleOptionSlider_SetKeyboardModifiers(@ptrCast(self.ptr), @bitCast(_keyboardModifiers));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` param1: QStyleOptionSlider `
    ///
    pub fn operatorAssign(self: QStyleOptionSlider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionSlider;
        qtc.QStyleOptionSlider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionSlider, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionSlider, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn version(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionSlider, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn type0(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionSlider, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionSlider, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionSlider, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn rect(self: QStyleOptionSlider) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionSlider, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn fontMetrics(self: QStyleOptionSlider) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionSlider, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn palette(self: QStyleOptionSlider) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionSlider, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn styleObject(self: QStyleOptionSlider) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionSlider, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionSlider, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn delete(self: QStyleOptionSlider) void {
        qtc.QStyleOptionSlider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html)
pub const QStyleOptionSpinBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionSpinBox,

    pub const _is_QStyleOptionSpinBox = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionSpinBox object in C++ memory
    ///
    pub fn new() QStyleOptionSpinBox {
        return .{ .ptr = qtc.QStyleOptionSpinBox_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionSpinBox object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionSpinBox `
    ///
    pub fn new2(other: anytype) QStyleOptionSpinBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionSpinBox;
        return .{ .ptr = qtc.QStyleOptionSpinBox_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `buttonSymbols` instead
    ///
    pub const ButtonSymbols = buttonSymbols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn buttonSymbols(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setButtonSymbols` instead
    ///
    pub const SetButtonSymbols = setButtonSymbols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _buttonSymbols: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn setButtonSymbols(self: QStyleOptionSpinBox, _buttonSymbols: i32) void {
        qtc.QStyleOptionSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(_buttonSymbols));
    }

    /// ### DEPRECATED: Use `stepEnabled` instead
    ///
    pub const StepEnabled = stepEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn stepEnabled(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionSpinBox_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStepEnabled` instead
    ///
    pub const SetStepEnabled = setStepEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _stepEnabled: flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn setStepEnabled(self: QStyleOptionSpinBox, _stepEnabled: i32) void {
        qtc.QStyleOptionSpinBox_SetStepEnabled(@ptrCast(self.ptr), @bitCast(_stepEnabled));
    }

    /// ### DEPRECATED: Use `frame` instead
    ///
    pub const Frame = frame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn frame(self: QStyleOptionSpinBox) bool {
        return qtc.QStyleOptionSpinBox_Frame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrame` instead
    ///
    pub const SetFrame = setFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _frame: bool `
    ///
    pub fn setFrame(self: QStyleOptionSpinBox, _frame: bool) void {
        qtc.QStyleOptionSpinBox_SetFrame(@ptrCast(self.ptr), _frame);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` param1: QStyleOptionSpinBox `
    ///
    pub fn operatorAssign(self: QStyleOptionSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionSpinBox;
        qtc.QStyleOptionSpinBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionSpinBox, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionSpinBox, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn version(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionSpinBox, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn type0(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionSpinBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionSpinBox, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionSpinBox, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn rect(self: QStyleOptionSpinBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionSpinBox, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn fontMetrics(self: QStyleOptionSpinBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionSpinBox, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn palette(self: QStyleOptionSpinBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionSpinBox, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn styleObject(self: QStyleOptionSpinBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionSpinBox, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionSpinBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn delete(self: QStyleOptionSpinBox) void {
        qtc.QStyleOptionSpinBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html)
pub const QStyleOptionToolButton = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionToolButton,

    pub const _is_QStyleOptionToolButton = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionToolButton object in C++ memory
    ///
    pub fn new() QStyleOptionToolButton {
        return .{ .ptr = qtc.QStyleOptionToolButton_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionToolButton object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionToolButton `
    ///
    pub fn new2(other: anytype) QStyleOptionToolButton {
        comptime _ = @TypeOf(other)._is_QStyleOptionToolButton;
        return .{ .ptr = qtc.QStyleOptionToolButton_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ToolButtonFeature `
    ///
    pub fn features(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionToolButton_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _features: flag of qstyleoption_enums.ToolButtonFeature `
    ///
    pub fn setFeatures(self: QStyleOptionToolButton, _features: i32) void {
        qtc.QStyleOptionToolButton_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn icon(self: QStyleOptionToolButton) QIcon {
        return .{ .ptr = qtc.QStyleOptionToolButton_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionToolButton, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionToolButton_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn iconSize(self: QStyleOptionToolButton) QSize {
        return .{ .ptr = qtc.QStyleOptionToolButton_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn setIconSize(self: QStyleOptionToolButton, _iconSize: anytype) void {
        comptime _ = @TypeOf(_iconSize)._is_QSize;
        qtc.QStyleOptionToolButton_SetIconSize(@ptrCast(self.ptr), @ptrCast(_iconSize.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionToolButton, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionToolButton_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionToolButton.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionToolButton, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionToolButton_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `arrowType` instead
    ///
    pub const ArrowType = arrowType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ArrowType `
    ///
    pub fn arrowType(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionToolButton_ArrowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setArrowType` instead
    ///
    pub const SetArrowType = setArrowType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _arrowType: qnamespace_enums.ArrowType `
    ///
    pub fn setArrowType(self: QStyleOptionToolButton, _arrowType: i32) void {
        qtc.QStyleOptionToolButton_SetArrowType(@ptrCast(self.ptr), @bitCast(_arrowType));
    }

    /// ### DEPRECATED: Use `toolButtonStyle` instead
    ///
    pub const ToolButtonStyle = toolButtonStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolButtonStyle `
    ///
    pub fn toolButtonStyle(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionToolButton_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolButtonStyle` instead
    ///
    pub const SetToolButtonStyle = setToolButtonStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn setToolButtonStyle(self: QStyleOptionToolButton, _toolButtonStyle: i32) void {
        qtc.QStyleOptionToolButton_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(_toolButtonStyle));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn pos(self: QStyleOptionToolButton) QPoint {
        return .{ .ptr = qtc.QStyleOptionToolButton_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setPos(self: QStyleOptionToolButton, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QStyleOptionToolButton_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn font(self: QStyleOptionToolButton) QFont {
        return .{ .ptr = qtc.QStyleOptionToolButton_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QStyleOptionToolButton, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QStyleOptionToolButton_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` param1: QStyleOptionToolButton `
    ///
    pub fn operatorAssign(self: QStyleOptionToolButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionToolButton;
        qtc.QStyleOptionToolButton_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionToolButton, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionToolButton, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn version(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionToolButton, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn type0(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionToolButton, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionToolButton, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionToolButton, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn rect(self: QStyleOptionToolButton) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionToolButton, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn fontMetrics(self: QStyleOptionToolButton) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionToolButton, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn palette(self: QStyleOptionToolButton) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionToolButton, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn styleObject(self: QStyleOptionToolButton) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionToolButton, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionToolButton, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn delete(self: QStyleOptionToolButton) void {
        qtc.QStyleOptionToolButton_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html)
pub const QStyleOptionComboBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionComboBox,

    pub const _is_QStyleOptionComboBox = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionComboBox object in C++ memory
    ///
    pub fn new() QStyleOptionComboBox {
        return .{ .ptr = qtc.QStyleOptionComboBox_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionComboBox object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionComboBox `
    ///
    pub fn new2(other: anytype) QStyleOptionComboBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionComboBox;
        return .{ .ptr = qtc.QStyleOptionComboBox_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `editable` instead
    ///
    pub const Editable = editable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn editable(self: QStyleOptionComboBox) bool {
        return qtc.QStyleOptionComboBox_Editable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _editable: bool `
    ///
    pub fn setEditable(self: QStyleOptionComboBox, _editable: bool) void {
        qtc.QStyleOptionComboBox_SetEditable(@ptrCast(self.ptr), _editable);
    }

    /// ### DEPRECATED: Use `popupRect` instead
    ///
    pub const PopupRect = popupRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn popupRect(self: QStyleOptionComboBox) QRect {
        return .{ .ptr = qtc.QStyleOptionComboBox_PopupRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopupRect` instead
    ///
    pub const SetPopupRect = setPopupRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _popupRect: QRect `
    ///
    pub fn setPopupRect(self: QStyleOptionComboBox, _popupRect: anytype) void {
        comptime _ = @TypeOf(_popupRect)._is_QRect;
        qtc.QStyleOptionComboBox_SetPopupRect(@ptrCast(self.ptr), @ptrCast(_popupRect.ptr));
    }

    /// ### DEPRECATED: Use `frame` instead
    ///
    pub const Frame = frame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn frame(self: QStyleOptionComboBox) bool {
        return qtc.QStyleOptionComboBox_Frame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrame` instead
    ///
    pub const SetFrame = setFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _frame: bool `
    ///
    pub fn setFrame(self: QStyleOptionComboBox, _frame: bool) void {
        qtc.QStyleOptionComboBox_SetFrame(@ptrCast(self.ptr), _frame);
    }

    /// ### DEPRECATED: Use `currentText` instead
    ///
    pub const CurrentText = currentText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentText(self: QStyleOptionComboBox, allocator: std.mem.Allocator) []const u8 {
        var currentText_str = qtc.QStyleOptionComboBox_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&currentText_str);
        const currentText_ret = allocator.alloc(u8, currentText_str.len) catch @panic("QStyleOptionComboBox.currentText: Memory allocation failed");
        @memcpy(currentText_ret, currentText_str.data[0..currentText_str.len]);
        return currentText_ret;
    }

    /// ### DEPRECATED: Use `setCurrentText` instead
    ///
    pub const SetCurrentText = setCurrentText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _currentText: []const u8 `
    ///
    pub fn setCurrentText(self: QStyleOptionComboBox, _currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
            .len = _currentText.len,
            .data = _currentText.ptr,
        };
        qtc.QStyleOptionComboBox_SetCurrentText(@ptrCast(self.ptr), currentText_str);
    }

    /// ### DEPRECATED: Use `currentIcon` instead
    ///
    pub const CurrentIcon = currentIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn currentIcon(self: QStyleOptionComboBox) QIcon {
        return .{ .ptr = qtc.QStyleOptionComboBox_CurrentIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCurrentIcon` instead
    ///
    pub const SetCurrentIcon = setCurrentIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _currentIcon: QIcon `
    ///
    pub fn setCurrentIcon(self: QStyleOptionComboBox, _currentIcon: anytype) void {
        comptime _ = @TypeOf(_currentIcon)._is_QIcon;
        qtc.QStyleOptionComboBox_SetCurrentIcon(@ptrCast(self.ptr), @ptrCast(_currentIcon.ptr));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn iconSize(self: QStyleOptionComboBox) QSize {
        return .{ .ptr = qtc.QStyleOptionComboBox_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn setIconSize(self: QStyleOptionComboBox, _iconSize: anytype) void {
        comptime _ = @TypeOf(_iconSize)._is_QSize;
        qtc.QStyleOptionComboBox_SetIconSize(@ptrCast(self.ptr), @ptrCast(_iconSize.ptr));
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOptionComboBox_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment(self: QStyleOptionComboBox, _textAlignment: i32) void {
        qtc.QStyleOptionComboBox_SetTextAlignment(@ptrCast(self.ptr), @bitCast(_textAlignment));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` param1: QStyleOptionComboBox `
    ///
    pub fn operatorAssign(self: QStyleOptionComboBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionComboBox;
        qtc.QStyleOptionComboBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionComboBox, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionComboBox, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn version(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionComboBox, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn type0(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionComboBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionComboBox, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionComboBox, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn rect(self: QStyleOptionComboBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionComboBox, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn fontMetrics(self: QStyleOptionComboBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionComboBox, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn palette(self: QStyleOptionComboBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionComboBox, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn styleObject(self: QStyleOptionComboBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionComboBox, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionComboBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn delete(self: QStyleOptionComboBox) void {
        qtc.QStyleOptionComboBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html)
pub const QStyleOptionTitleBar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionTitleBar,

    pub const _is_QStyleOptionTitleBar = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionTitleBar object in C++ memory
    ///
    pub fn new() QStyleOptionTitleBar {
        return .{ .ptr = qtc.QStyleOptionTitleBar_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionTitleBar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTitleBar `
    ///
    pub fn new2(other: anytype) QStyleOptionTitleBar {
        comptime _ = @TypeOf(other)._is_QStyleOptionTitleBar;
        return .{ .ptr = qtc.QStyleOptionTitleBar_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionTitleBar, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionTitleBar_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionTitleBar.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionTitleBar, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionTitleBar_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn icon(self: QStyleOptionTitleBar) QIcon {
        return .{ .ptr = qtc.QStyleOptionTitleBar_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStyleOptionTitleBar, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStyleOptionTitleBar_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `titleBarState` instead
    ///
    pub const TitleBarState = titleBarState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn titleBarState(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleBarState` instead
    ///
    pub const SetTitleBarState = setTitleBarState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _titleBarState: i32 `
    ///
    pub fn setTitleBarState(self: QStyleOptionTitleBar, _titleBarState: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarState(@ptrCast(self.ptr), @bitCast(_titleBarState));
    }

    /// ### DEPRECATED: Use `titleBarFlags` instead
    ///
    pub const TitleBarFlags = titleBarFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn titleBarFlags(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleBarFlags` instead
    ///
    pub const SetTitleBarFlags = setTitleBarFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _titleBarFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setTitleBarFlags(self: QStyleOptionTitleBar, _titleBarFlags: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarFlags(@ptrCast(self.ptr), @bitCast(_titleBarFlags));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` param1: QStyleOptionTitleBar `
    ///
    pub fn operatorAssign(self: QStyleOptionTitleBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTitleBar;
        qtc.QStyleOptionTitleBar_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionTitleBar, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionTitleBar, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn version(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionTitleBar, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn type0(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionTitleBar, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionTitleBar, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionTitleBar, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn rect(self: QStyleOptionTitleBar) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionTitleBar, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn fontMetrics(self: QStyleOptionTitleBar) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionTitleBar, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn palette(self: QStyleOptionTitleBar) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionTitleBar, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn styleObject(self: QStyleOptionTitleBar) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionTitleBar, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionTitleBar, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn delete(self: QStyleOptionTitleBar) void {
        qtc.QStyleOptionTitleBar_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html)
pub const QStyleOptionGroupBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionGroupBox,

    pub const _is_QStyleOptionGroupBox = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionGroupBox object in C++ memory
    ///
    pub fn new() QStyleOptionGroupBox {
        return .{ .ptr = qtc.QStyleOptionGroupBox_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionGroupBox object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionGroupBox `
    ///
    pub fn new2(other: anytype) QStyleOptionGroupBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionGroupBox;
        return .{ .ptr = qtc.QStyleOptionGroupBox_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn features(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _features: flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn setFeatures(self: QStyleOptionGroupBox, _features: i32) void {
        qtc.QStyleOptionGroupBox_SetFeatures(@ptrCast(self.ptr), @bitCast(_features));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStyleOptionGroupBox, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionGroupBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("QStyleOptionGroupBox.text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStyleOptionGroupBox, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStyleOptionGroupBox_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment(self: QStyleOptionGroupBox, _textAlignment: i32) void {
        qtc.QStyleOptionGroupBox_SetTextAlignment(@ptrCast(self.ptr), @bitCast(_textAlignment));
    }

    /// ### DEPRECATED: Use `textColor` instead
    ///
    pub const TextColor = textColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn textColor(self: QStyleOptionGroupBox) QColor {
        return .{ .ptr = qtc.QStyleOptionGroupBox_TextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextColor` instead
    ///
    pub const SetTextColor = setTextColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _textColor: QColor `
    ///
    pub fn setTextColor(self: QStyleOptionGroupBox, _textColor: anytype) void {
        comptime _ = @TypeOf(_textColor)._is_QColor;
        qtc.QStyleOptionGroupBox_SetTextColor(@ptrCast(self.ptr), @ptrCast(_textColor.ptr));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn lineWidth(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QStyleOptionGroupBox, _lineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetLineWidth(@ptrCast(self.ptr), @bitCast(_lineWidth));
    }

    /// ### DEPRECATED: Use `midLineWidth` instead
    ///
    pub const MidLineWidth = midLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn midLineWidth(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMidLineWidth` instead
    ///
    pub const SetMidLineWidth = setMidLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QStyleOptionGroupBox, _midLineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(_midLineWidth));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` param1: QStyleOptionGroupBox `
    ///
    pub fn operatorAssign(self: QStyleOptionGroupBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionGroupBox;
        qtc.QStyleOptionGroupBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionGroupBox, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionGroupBox, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn version(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionGroupBox, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn type0(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionGroupBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionGroupBox, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionGroupBox, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn rect(self: QStyleOptionGroupBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionGroupBox, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn fontMetrics(self: QStyleOptionGroupBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionGroupBox, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn palette(self: QStyleOptionGroupBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionGroupBox, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn styleObject(self: QStyleOptionGroupBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionGroupBox, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionGroupBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn delete(self: QStyleOptionGroupBox) void {
        qtc.QStyleOptionGroupBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html)
pub const QStyleOptionSizeGrip = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionSizeGrip,

    pub const _is_QStyleOptionSizeGrip = {};
    pub const _is_QStyleOptionComplex = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionSizeGrip object in C++ memory
    ///
    pub fn new() QStyleOptionSizeGrip {
        return .{ .ptr = qtc.QStyleOptionSizeGrip_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionSizeGrip object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionSizeGrip `
    ///
    pub fn new2(other: anytype) QStyleOptionSizeGrip {
        comptime _ = @TypeOf(other)._is_QStyleOptionSizeGrip;
        return .{ .ptr = qtc.QStyleOptionSizeGrip_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `corner` instead
    ///
    pub const Corner = corner;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Corner `
    ///
    pub fn corner(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOptionSizeGrip_Corner(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCorner` instead
    ///
    pub const SetCorner = setCorner;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _corner: qnamespace_enums.Corner `
    ///
    pub fn setCorner(self: QStyleOptionSizeGrip, _corner: i32) void {
        qtc.QStyleOptionSizeGrip_SetCorner(@ptrCast(self.ptr), @bitCast(_corner));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` param1: QStyleOptionSizeGrip `
    ///
    pub fn operatorAssign(self: QStyleOptionSizeGrip, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionSizeGrip;
        qtc.QStyleOptionSizeGrip_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `subControls` instead
    ///
    pub const SubControls = subControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn subControls(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubControls` instead
    ///
    pub const SetSubControls = setSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setSubControls(self: QStyleOptionSizeGrip, _subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(_subControls));
    }

    /// ### DEPRECATED: Use `activeSubControls` instead
    ///
    pub const ActiveSubControls = activeSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn activeSubControls(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveSubControls` instead
    ///
    pub const SetActiveSubControls = setActiveSubControls;

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn setActiveSubControls(self: QStyleOptionSizeGrip, _activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(_activeSubControls));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn version(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionSizeGrip, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn type0(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionSizeGrip, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionSizeGrip, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionSizeGrip, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn rect(self: QStyleOptionSizeGrip) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionSizeGrip, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn fontMetrics(self: QStyleOptionSizeGrip) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionSizeGrip, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn palette(self: QStyleOptionSizeGrip) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionSizeGrip, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn styleObject(self: QStyleOptionSizeGrip) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionSizeGrip, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionSizeGrip, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn delete(self: QStyleOptionSizeGrip) void {
        qtc.QStyleOptionSizeGrip_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html)
pub const QStyleOptionGraphicsItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleOptionGraphicsItem,

    pub const _is_QStyleOptionGraphicsItem = {};
    pub const _is_QStyleOption = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleOptionGraphicsItem object in C++ memory
    ///
    pub fn new() QStyleOptionGraphicsItem {
        return .{ .ptr = qtc.QStyleOptionGraphicsItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleOptionGraphicsItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionGraphicsItem `
    ///
    pub fn new2(other: anytype) QStyleOptionGraphicsItem {
        comptime _ = @TypeOf(other)._is_QStyleOptionGraphicsItem;
        return .{ .ptr = qtc.QStyleOptionGraphicsItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `exposedRect` instead
    ///
    pub const ExposedRect = exposedRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn exposedRect(self: QStyleOptionGraphicsItem) QRectF {
        return .{ .ptr = qtc.QStyleOptionGraphicsItem_ExposedRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExposedRect` instead
    ///
    pub const SetExposedRect = setExposedRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _exposedRect: QRectF `
    ///
    pub fn setExposedRect(self: QStyleOptionGraphicsItem, _exposedRect: anytype) void {
        comptime _ = @TypeOf(_exposedRect)._is_QRectF;
        qtc.QStyleOptionGraphicsItem_SetExposedRect(@ptrCast(self.ptr), @ptrCast(_exposedRect.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` param1: QStyleOptionGraphicsItem `
    ///
    pub fn operatorAssign(self: QStyleOptionGraphicsItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionGraphicsItem;
        qtc.QStyleOptionGraphicsItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `levelOfDetailFromTransform` instead
    ///
    pub const LevelOfDetailFromTransform = levelOfDetailFromTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` worldTransform: QTransform `
    ///
    pub fn levelOfDetailFromTransform(worldTransform: anytype) f64 {
        comptime _ = @TypeOf(worldTransform)._is_QTransform;
        return qtc.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(@ptrCast(worldTransform.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn version(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleOptionGraphicsItem, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn type0(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleOptionGraphicsItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn state(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: QStyleOptionGraphicsItem, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn direction(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: QStyleOptionGraphicsItem, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn rect(self: QStyleOptionGraphicsItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: QStyleOptionGraphicsItem, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn fontMetrics(self: QStyleOptionGraphicsItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: QStyleOptionGraphicsItem, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn palette(self: QStyleOptionGraphicsItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QStyleOptionGraphicsItem, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn styleObject(self: QStyleOptionGraphicsItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: QStyleOptionGraphicsItem, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` w: QWidget `
    ///
    pub fn initFrom(self: QStyleOptionGraphicsItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn delete(self: QStyleOptionGraphicsItem) void {
        qtc.QStyleOptionGraphicsItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html)
pub const QStyleHintReturn = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleHintReturn,

    pub const _is_QStyleHintReturn = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleHintReturn object in C++ memory
    ///
    pub fn new() QStyleHintReturn {
        return .{ .ptr = qtc.QStyleHintReturn_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleHintReturn object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStyleHintReturn `
    ///
    pub fn new2(param1: anytype) QStyleHintReturn {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturn;
        return .{ .ptr = qtc.QStyleHintReturn_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStyleHintReturn object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _version: i32 `
    ///
    pub fn new3(_version: i32) QStyleHintReturn {
        return .{ .ptr = qtc.QStyleHintReturn_new3(@bitCast(_version)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStyleHintReturn object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new4(_version: i32, typeVal: i32) QStyleHintReturn {
        return .{ .ptr = qtc.QStyleHintReturn_new4(@bitCast(_version), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    pub fn version(self: QStyleHintReturn) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleHintReturn, _version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    pub fn type0(self: QStyleHintReturn) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleHintReturn, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    /// ` param1: QStyleHintReturn `
    ///
    pub fn operatorAssign(self: QStyleHintReturn, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturn;
        qtc.QStyleHintReturn_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHintReturn `
    ///
    pub fn delete(self: QStyleHintReturn) void {
        qtc.QStyleHintReturn_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html)
pub const QStyleHintReturnMask = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleHintReturnMask,

    pub const _is_QStyleHintReturnMask = {};
    pub const _is_QStyleHintReturn = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleHintReturnMask object in C++ memory
    ///
    pub fn new() QStyleHintReturnMask {
        return .{ .ptr = qtc.QStyleHintReturnMask_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleHintReturnMask object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStyleHintReturnMask `
    ///
    pub fn new2(param1: anytype) QStyleHintReturnMask {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnMask;
        return .{ .ptr = qtc.QStyleHintReturnMask_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `region` instead
    ///
    pub const Region = region;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn region(self: QStyleHintReturnMask) QRegion {
        return .{ .ptr = qtc.QStyleHintReturnMask_Region(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRegion` instead
    ///
    pub const SetRegion = setRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` _region: QRegion `
    ///
    pub fn setRegion(self: QStyleHintReturnMask, _region: anytype) void {
        comptime _ = @TypeOf(_region)._is_QRegion;
        qtc.QStyleHintReturnMask_SetRegion(@ptrCast(self.ptr), @ptrCast(_region.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` param1: QStyleHintReturnMask `
    ///
    pub fn operatorAssign(self: QStyleHintReturnMask, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnMask;
        qtc.QStyleHintReturnMask_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn version(self: QStyleHintReturnMask) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleHintReturnMask, _version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn type0(self: QStyleHintReturnMask) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleHintReturnMask, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn delete(self: QStyleHintReturnMask) void {
        qtc.QStyleHintReturnMask_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html)
pub const QStyleHintReturnVariant = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleHintReturnVariant,

    pub const _is_QStyleHintReturnVariant = {};
    pub const _is_QStyleHintReturn = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleHintReturnVariant object in C++ memory
    ///
    pub fn new() QStyleHintReturnVariant {
        return .{ .ptr = qtc.QStyleHintReturnVariant_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleHintReturnVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStyleHintReturnVariant `
    ///
    pub fn new2(param1: anytype) QStyleHintReturnVariant {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnVariant;
        return .{ .ptr = qtc.QStyleHintReturnVariant_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `variant` instead
    ///
    pub const Variant = variant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn variant(self: QStyleHintReturnVariant) QVariant {
        return .{ .ptr = qtc.QStyleHintReturnVariant_Variant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVariant` instead
    ///
    pub const SetVariant = setVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` _variant: QVariant `
    ///
    pub fn setVariant(self: QStyleHintReturnVariant, _variant: anytype) void {
        comptime _ = @TypeOf(_variant)._is_QVariant;
        qtc.QStyleHintReturnVariant_SetVariant(@ptrCast(self.ptr), @ptrCast(_variant.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` param1: QStyleHintReturnVariant `
    ///
    pub fn operatorAssign(self: QStyleHintReturnVariant, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnVariant;
        qtc.QStyleHintReturnVariant_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn version(self: QStyleHintReturnVariant) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QStyleHintReturnVariant, _version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn type0(self: QStyleHintReturnVariant) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QStyleHintReturnVariant, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn delete(self: QStyleHintReturnVariant) void {
        qtc.QStyleHintReturnVariant_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#public-types)
pub const enums = struct {
    pub const QStyleOption__OptionType = enum {
        pub const SO_Default: i32 = 0;
        pub const SO_FocusRect: i32 = 1;
        pub const SO_Button: i32 = 2;
        pub const SO_Tab: i32 = 3;
        pub const SO_MenuItem: i32 = 4;
        pub const SO_Frame: i32 = 5;
        pub const SO_ProgressBar: i32 = 6;
        pub const SO_ToolBox: i32 = 7;
        pub const SO_Header: i32 = 8;
        pub const SO_DockWidget: i32 = 9;
        pub const SO_ViewItem: i32 = 10;
        pub const SO_TabWidgetFrame: i32 = 11;
        pub const SO_TabBarBase: i32 = 12;
        pub const SO_RubberBand: i32 = 13;
        pub const SO_ToolBar: i32 = 14;
        pub const SO_GraphicsItem: i32 = 15;
        pub const SO_Complex: i32 = 983040;
        pub const SO_Slider: i32 = 983041;
        pub const SO_SpinBox: i32 = 983042;
        pub const SO_ToolButton: i32 = 983043;
        pub const SO_ComboBox: i32 = 983044;
        pub const SO_TitleBar: i32 = 983045;
        pub const SO_GroupBox: i32 = 983046;
        pub const SO_SizeGrip: i32 = 983047;
        pub const SO_CustomBase: i32 = 3840;
        pub const SO_ComplexCustomBase: i32 = 251658240;
    };

    pub const QStyleOption__StyleOptionType = enum {
        pub const Type: i32 = 0;
    };

    pub const QStyleOption__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFocusRect__StyleOptionType = enum {
        pub const Type: i32 = 1;
    };

    pub const QStyleOptionFocusRect__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFrame__StyleOptionType = enum {
        pub const Type: i32 = 5;
    };

    pub const QStyleOptionFrame__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFrame__FrameFeature = enum {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const Rounded: i32 = 2;
    };

    pub const QStyleOptionTabWidgetFrame__StyleOptionType = enum {
        pub const Type: i32 = 11;
    };

    pub const QStyleOptionTabWidgetFrame__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTabBarBase__StyleOptionType = enum {
        pub const Type: i32 = 12;
    };

    pub const QStyleOptionTabBarBase__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionHeader__StyleOptionType = enum {
        pub const Type: i32 = 8;
    };

    pub const QStyleOptionHeader__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionHeader__SectionPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneSection: i32 = 3;
    };

    pub const QStyleOptionHeader__SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
        pub const NextAndPreviousAreSelected: i32 = 3;
    };

    pub const QStyleOptionHeader__SortIndicator = enum {
        pub const None: i32 = 0;
        pub const SortUp: i32 = 1;
        pub const SortDown: i32 = 2;
    };

    pub const QStyleOptionHeaderV2__StyleOptionType = enum {
        pub const Type: i32 = 8;
    };

    pub const QStyleOptionHeaderV2__StyleOptionVersion = enum {
        pub const Version: i32 = 2;
    };

    pub const QStyleOptionButton__StyleOptionType = enum {
        pub const Type: i32 = 2;
    };

    pub const QStyleOptionButton__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionButton__ButtonFeature = enum {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const HasMenu: i32 = 2;
        pub const DefaultButton: i32 = 4;
        pub const AutoDefaultButton: i32 = 8;
        pub const CommandLinkButton: i32 = 16;
    };

    pub const QStyleOptionTab__StyleOptionType = enum {
        pub const Type: i32 = 3;
    };

    pub const QStyleOptionTab__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTab__TabPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
        pub const Moving: i32 = 4;
    };

    pub const QStyleOptionTab__SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
    };

    pub const QStyleOptionTab__CornerWidget = enum {
        pub const NoCornerWidgets: i32 = 0;
        pub const LeftCornerWidget: i32 = 1;
        pub const RightCornerWidget: i32 = 2;
    };

    pub const QStyleOptionTab__TabFeature = enum {
        pub const None: i32 = 0;
        pub const HasFrame: i32 = 1;
    };

    pub const QStyleOptionToolBar__StyleOptionType = enum {
        pub const Type: i32 = 14;
    };

    pub const QStyleOptionToolBar__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolBar__ToolBarPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOne: i32 = 3;
    };

    pub const QStyleOptionToolBar__ToolBarFeature = enum {
        pub const None: i32 = 0;
        pub const Movable: i32 = 1;
    };

    pub const QStyleOptionProgressBar__StyleOptionType = enum {
        pub const Type: i32 = 6;
    };

    pub const QStyleOptionProgressBar__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionMenuItem__StyleOptionType = enum {
        pub const Type: i32 = 4;
    };

    pub const QStyleOptionMenuItem__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionMenuItem__MenuItemType = enum {
        pub const Normal: i32 = 0;
        pub const DefaultItem: i32 = 1;
        pub const Separator: i32 = 2;
        pub const SubMenu: i32 = 3;
        pub const Scroller: i32 = 4;
        pub const TearOff: i32 = 5;
        pub const Margin: i32 = 6;
        pub const EmptyArea: i32 = 7;
    };

    pub const QStyleOptionMenuItem__CheckType = enum {
        pub const NotCheckable: i32 = 0;
        pub const Exclusive: i32 = 1;
        pub const NonExclusive: i32 = 2;
    };

    pub const QStyleOptionDockWidget__StyleOptionType = enum {
        pub const Type: i32 = 9;
    };

    pub const QStyleOptionDockWidget__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionViewItem__StyleOptionType = enum {
        pub const Type: i32 = 10;
    };

    pub const QStyleOptionViewItem__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionViewItem__Position = enum {
        pub const Left: i32 = 0;
        pub const Right: i32 = 1;
        pub const Top: i32 = 2;
        pub const Bottom: i32 = 3;
    };

    pub const QStyleOptionViewItem__ViewItemFeature = enum {
        pub const None: i32 = 0;
        pub const WrapText: i32 = 1;
        pub const Alternate: i32 = 2;
        pub const HasCheckIndicator: i32 = 4;
        pub const HasDisplay: i32 = 8;
        pub const HasDecoration: i32 = 16;
    };

    pub const QStyleOptionViewItem__ViewItemPosition = enum {
        pub const Invalid: i32 = 0;
        pub const Beginning: i32 = 1;
        pub const Middle: i32 = 2;
        pub const End: i32 = 3;
        pub const OnlyOne: i32 = 4;
    };

    pub const QStyleOptionToolBox__StyleOptionType = enum {
        pub const Type: i32 = 7;
    };

    pub const QStyleOptionToolBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolBox__TabPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
    };

    pub const QStyleOptionToolBox__SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
    };

    pub const QStyleOptionRubberBand__StyleOptionType = enum {
        pub const Type: i32 = 13;
    };

    pub const QStyleOptionRubberBand__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionComplex__StyleOptionType = enum {
        pub const Type: i32 = 983040;
    };

    pub const QStyleOptionComplex__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSlider__StyleOptionType = enum {
        pub const Type: i32 = 983041;
    };

    pub const QStyleOptionSlider__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSpinBox__StyleOptionType = enum {
        pub const Type: i32 = 983042;
    };

    pub const QStyleOptionSpinBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolButton__StyleOptionType = enum {
        pub const Type: i32 = 983043;
    };

    pub const QStyleOptionToolButton__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolButton__ToolButtonFeature = enum {
        pub const None: i32 = 0;
        pub const Arrow: i32 = 1;
        pub const Menu: i32 = 4;
        pub const MenuButtonPopup: i32 = 4;
        pub const PopupDelay: i32 = 8;
        pub const HasMenu: i32 = 16;
    };

    pub const QStyleOptionComboBox__StyleOptionType = enum {
        pub const Type: i32 = 983044;
    };

    pub const QStyleOptionComboBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTitleBar__StyleOptionType = enum {
        pub const Type: i32 = 983045;
    };

    pub const QStyleOptionTitleBar__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionGroupBox__StyleOptionType = enum {
        pub const Type: i32 = 983046;
    };

    pub const QStyleOptionGroupBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSizeGrip__StyleOptionType = enum {
        pub const Type: i32 = 983047;
    };

    pub const QStyleOptionSizeGrip__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionGraphicsItem__StyleOptionType = enum {
        pub const Type: i32 = 15;
    };

    pub const QStyleOptionGraphicsItem__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturn__HintReturnType = enum {
        pub const SH_Default: i32 = 61440;
        pub const SH_Mask: i32 = 61441;
        pub const SH_Variant: i32 = 61442;
    };

    pub const QStyleHintReturn__StyleOptionType = enum {
        pub const Type: i32 = 61440;
    };

    pub const QStyleHintReturn__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturnMask__StyleOptionType = enum {
        pub const Type: i32 = 61441;
    };

    pub const QStyleHintReturnMask__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturnVariant__StyleOptionType = enum {
        pub const Type: i32 = 61442;
    };

    pub const QStyleHintReturnVariant__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };
};
