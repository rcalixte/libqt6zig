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

    /// New constructs a new QStyleOption object.
    ///
    pub fn New() QStyleOption {
        return .{ .ptr = qtc.QStyleOption_new() };
    }

    /// New2 constructs a new QStyleOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOption `
    ///
    pub fn New2(other: anytype) QStyleOption {
        comptime _ = @TypeOf(other)._is_QStyleOption;
        return .{ .ptr = qtc.QStyleOption_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QStyleOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    pub fn New3(version: i32) QStyleOption {
        return .{ .ptr = qtc.QStyleOption_new3(@bitCast(version)) };
    }

    /// New4 constructs a new QStyleOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New4(version: i32, typeVal: i32) QStyleOption {
        return .{ .ptr = qtc.QStyleOption_new4(@bitCast(version), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn Version(self: QStyleOption) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOption, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn Type(self: QStyleOption) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOption, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOption) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOption, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOption) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOption, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn Rect(self: QStyleOption) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOption, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn FontMetrics(self: QStyleOption) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOption, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn Palette(self: QStyleOption) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOption, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    pub fn StyleObject(self: QStyleOption) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOption, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` w: QWidget `
    ///
    pub fn InitFrom(self: QStyleOption, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOption `
    ///
    /// ` other: QStyleOption `
    ///
    pub fn OperatorAssign(self: QStyleOption, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStyleOption;
        qtc.QStyleOption_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOption `
    ///
    pub fn Delete(self: QStyleOption) void {
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

    /// New constructs a new QStyleOptionFocusRect object.
    ///
    pub fn New() QStyleOptionFocusRect {
        return .{ .ptr = qtc.QStyleOptionFocusRect_new() };
    }

    /// New2 constructs a new QStyleOptionFocusRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionFocusRect `
    ///
    pub fn New2(other: anytype) QStyleOptionFocusRect {
        comptime _ = @TypeOf(other)._is_QStyleOptionFocusRect;
        return .{ .ptr = qtc.QStyleOptionFocusRect_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn BackgroundColor(self: QStyleOptionFocusRect) QColor {
        return .{ .ptr = qtc.QStyleOptionFocusRect_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` backgroundColor: QColor `
    ///
    pub fn SetBackgroundColor(self: QStyleOptionFocusRect, backgroundColor: anytype) void {
        comptime _ = @TypeOf(backgroundColor)._is_QColor;
        qtc.QStyleOptionFocusRect_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(backgroundColor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` param1: QStyleOptionFocusRect `
    ///
    pub fn OperatorAssign(self: QStyleOptionFocusRect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionFocusRect;
        qtc.QStyleOptionFocusRect_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn Version(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionFocusRect, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn Type(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionFocusRect, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionFocusRect, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionFocusRect) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionFocusRect, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn Rect(self: QStyleOptionFocusRect) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionFocusRect, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn FontMetrics(self: QStyleOptionFocusRect) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionFocusRect, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn Palette(self: QStyleOptionFocusRect) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionFocusRect, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn StyleObject(self: QStyleOptionFocusRect) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionFocusRect, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionFocusRect, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionFocusRect `
    ///
    pub fn Delete(self: QStyleOptionFocusRect) void {
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

    /// New constructs a new QStyleOptionFrame object.
    ///
    pub fn New() QStyleOptionFrame {
        return .{ .ptr = qtc.QStyleOptionFrame_new() };
    }

    /// New2 constructs a new QStyleOptionFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionFrame `
    ///
    pub fn New2(other: anytype) QStyleOptionFrame {
        comptime _ = @TypeOf(other)._is_QStyleOptionFrame;
        return .{ .ptr = qtc.QStyleOptionFrame_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn LineWidth(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QStyleOptionFrame, lineWidth: i32) void {
        qtc.QStyleOptionFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn MidLineWidth(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QStyleOptionFrame, midLineWidth: i32) void {
        qtc.QStyleOptionFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

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
    pub fn Features(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` features: flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionFrame, features: i32) void {
        qtc.QStyleOptionFrame_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

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
    pub fn FrameShape(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOptionFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QStyleOptionFrame, frameShape: i32) void {
        qtc.QStyleOptionFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` param1: QStyleOptionFrame `
    ///
    pub fn OperatorAssign(self: QStyleOptionFrame, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionFrame;
        qtc.QStyleOptionFrame_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn Version(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionFrame, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn Type(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionFrame, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionFrame, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionFrame) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionFrame, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn Rect(self: QStyleOptionFrame) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionFrame, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn FontMetrics(self: QStyleOptionFrame) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionFrame, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn Palette(self: QStyleOptionFrame) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionFrame, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn StyleObject(self: QStyleOptionFrame) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionFrame `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionFrame, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionFrame, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionFrame `
    ///
    pub fn Delete(self: QStyleOptionFrame) void {
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

    /// New constructs a new QStyleOptionTabWidgetFrame object.
    ///
    pub fn New() QStyleOptionTabWidgetFrame {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_new() };
    }

    /// New2 constructs a new QStyleOptionTabWidgetFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTabWidgetFrame `
    ///
    pub fn New2(other: anytype) QStyleOptionTabWidgetFrame {
        comptime _ = @TypeOf(other)._is_QStyleOptionTabWidgetFrame;
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn LineWidth(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOptionTabWidgetFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QStyleOptionTabWidgetFrame, lineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn MidLineWidth(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOptionTabWidgetFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QStyleOptionTabWidgetFrame, midLineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

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
    pub fn Shape(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOptionTabWidgetFrame_Shape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` shape: qtabbar_enums.Shape `
    ///
    pub fn SetShape(self: QStyleOptionTabWidgetFrame, shape: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn TabBarSize(self: QStyleOptionTabWidgetFrame) QSize {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_TabBarSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` tabBarSize: QSize `
    ///
    pub fn SetTabBarSize(self: QStyleOptionTabWidgetFrame, tabBarSize: anytype) void {
        comptime _ = @TypeOf(tabBarSize)._is_QSize;
        qtc.QStyleOptionTabWidgetFrame_SetTabBarSize(@ptrCast(self.ptr), @ptrCast(tabBarSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn RightCornerWidgetSize(self: QStyleOptionTabWidgetFrame) QSize {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_RightCornerWidgetSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` rightCornerWidgetSize: QSize `
    ///
    pub fn SetRightCornerWidgetSize(self: QStyleOptionTabWidgetFrame, rightCornerWidgetSize: anytype) void {
        comptime _ = @TypeOf(rightCornerWidgetSize)._is_QSize;
        qtc.QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(@ptrCast(self.ptr), @ptrCast(rightCornerWidgetSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn LeftCornerWidgetSize(self: QStyleOptionTabWidgetFrame) QSize {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` leftCornerWidgetSize: QSize `
    ///
    pub fn SetLeftCornerWidgetSize(self: QStyleOptionTabWidgetFrame, leftCornerWidgetSize: anytype) void {
        comptime _ = @TypeOf(leftCornerWidgetSize)._is_QSize;
        qtc.QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(@ptrCast(self.ptr), @ptrCast(leftCornerWidgetSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn TabBarRect(self: QStyleOptionTabWidgetFrame) QRect {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_TabBarRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` tabBarRect: QRect `
    ///
    pub fn SetTabBarRect(self: QStyleOptionTabWidgetFrame, tabBarRect: anytype) void {
        comptime _ = @TypeOf(tabBarRect)._is_QRect;
        qtc.QStyleOptionTabWidgetFrame_SetTabBarRect(@ptrCast(self.ptr), @ptrCast(tabBarRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn SelectedTabRect(self: QStyleOptionTabWidgetFrame) QRect {
        return .{ .ptr = qtc.QStyleOptionTabWidgetFrame_SelectedTabRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` selectedTabRect: QRect `
    ///
    pub fn SetSelectedTabRect(self: QStyleOptionTabWidgetFrame, selectedTabRect: anytype) void {
        comptime _ = @TypeOf(selectedTabRect)._is_QRect;
        qtc.QStyleOptionTabWidgetFrame_SetSelectedTabRect(@ptrCast(self.ptr), @ptrCast(selectedTabRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` param1: QStyleOptionTabWidgetFrame `
    ///
    pub fn OperatorAssign(self: QStyleOptionTabWidgetFrame, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTabWidgetFrame;
        qtc.QStyleOptionTabWidgetFrame_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn Version(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionTabWidgetFrame, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn Type(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionTabWidgetFrame, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionTabWidgetFrame, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionTabWidgetFrame) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionTabWidgetFrame, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn Rect(self: QStyleOptionTabWidgetFrame) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionTabWidgetFrame, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn FontMetrics(self: QStyleOptionTabWidgetFrame) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionTabWidgetFrame, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn Palette(self: QStyleOptionTabWidgetFrame) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionTabWidgetFrame, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn StyleObject(self: QStyleOptionTabWidgetFrame) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionTabWidgetFrame, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionTabWidgetFrame, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTabWidgetFrame `
    ///
    pub fn Delete(self: QStyleOptionTabWidgetFrame) void {
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

    /// New constructs a new QStyleOptionTabBarBase object.
    ///
    pub fn New() QStyleOptionTabBarBase {
        return .{ .ptr = qtc.QStyleOptionTabBarBase_new() };
    }

    /// New2 constructs a new QStyleOptionTabBarBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTabBarBase `
    ///
    pub fn New2(other: anytype) QStyleOptionTabBarBase {
        comptime _ = @TypeOf(other)._is_QStyleOptionTabBarBase;
        return .{ .ptr = qtc.QStyleOptionTabBarBase_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Shape(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOptionTabBarBase_Shape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` shape: qtabbar_enums.Shape `
    ///
    pub fn SetShape(self: QStyleOptionTabBarBase, shape: i32) void {
        qtc.QStyleOptionTabBarBase_SetShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn TabBarRect(self: QStyleOptionTabBarBase) QRect {
        return .{ .ptr = qtc.QStyleOptionTabBarBase_TabBarRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` tabBarRect: QRect `
    ///
    pub fn SetTabBarRect(self: QStyleOptionTabBarBase, tabBarRect: anytype) void {
        comptime _ = @TypeOf(tabBarRect)._is_QRect;
        qtc.QStyleOptionTabBarBase_SetTabBarRect(@ptrCast(self.ptr), @ptrCast(tabBarRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn SelectedTabRect(self: QStyleOptionTabBarBase) QRect {
        return .{ .ptr = qtc.QStyleOptionTabBarBase_SelectedTabRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` selectedTabRect: QRect `
    ///
    pub fn SetSelectedTabRect(self: QStyleOptionTabBarBase, selectedTabRect: anytype) void {
        comptime _ = @TypeOf(selectedTabRect)._is_QRect;
        qtc.QStyleOptionTabBarBase_SetSelectedTabRect(@ptrCast(self.ptr), @ptrCast(selectedTabRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn DocumentMode(self: QStyleOptionTabBarBase) bool {
        return qtc.QStyleOptionTabBarBase_DocumentMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` documentMode: bool `
    ///
    pub fn SetDocumentMode(self: QStyleOptionTabBarBase, documentMode: bool) void {
        qtc.QStyleOptionTabBarBase_SetDocumentMode(@ptrCast(self.ptr), documentMode);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` param1: QStyleOptionTabBarBase `
    ///
    pub fn OperatorAssign(self: QStyleOptionTabBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTabBarBase;
        qtc.QStyleOptionTabBarBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn Version(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionTabBarBase, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn Type(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionTabBarBase, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionTabBarBase, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionTabBarBase) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionTabBarBase, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn Rect(self: QStyleOptionTabBarBase) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionTabBarBase, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn FontMetrics(self: QStyleOptionTabBarBase) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionTabBarBase, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn Palette(self: QStyleOptionTabBarBase) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionTabBarBase, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn StyleObject(self: QStyleOptionTabBarBase) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionTabBarBase, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionTabBarBase, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTabBarBase `
    ///
    pub fn Delete(self: QStyleOptionTabBarBase) void {
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

    /// New constructs a new QStyleOptionHeader object.
    ///
    pub fn New() QStyleOptionHeader {
        return .{ .ptr = qtc.QStyleOptionHeader_new() };
    }

    /// New2 constructs a new QStyleOptionHeader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionHeader `
    ///
    pub fn New2(other: anytype) QStyleOptionHeader {
        comptime _ = @TypeOf(other)._is_QStyleOptionHeader;
        return .{ .ptr = qtc.QStyleOptionHeader_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Section(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` section: i32 `
    ///
    pub fn SetSection(self: QStyleOptionHeader, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionHeader, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionheader.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionHeader, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn TextAlignment(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: QStyleOptionHeader, textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self.ptr), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Icon(self: QStyleOptionHeader) QIcon {
        return .{ .ptr = qtc.QStyleOptionHeader_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionHeader, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn IconAlignment(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` iconAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetIconAlignment(self: QStyleOptionHeader, iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self.ptr), @bitCast(iconAlignment));
    }

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
    pub fn Position(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` position: qstyleoption_enums.SectionPosition `
    ///
    pub fn SetPosition(self: QStyleOptionHeader, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

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
    pub fn SelectedPosition(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: QStyleOptionHeader, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(selectedPosition));
    }

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
    pub fn SortIndicator(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` sortIndicator: qstyleoption_enums.SortIndicator `
    ///
    pub fn SetSortIndicator(self: QStyleOptionHeader, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self.ptr), @bitCast(sortIndicator));
    }

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
    pub fn Orientation(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QStyleOptionHeader, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` param1: QStyleOptionHeader `
    ///
    pub fn OperatorAssign(self: QStyleOptionHeader, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionHeader;
        qtc.QStyleOptionHeader_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Version(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionHeader, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Type(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionHeader, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionHeader, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionHeader) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionHeader, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Rect(self: QStyleOptionHeader) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionHeader, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn FontMetrics(self: QStyleOptionHeader) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionHeader, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Palette(self: QStyleOptionHeader) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionHeader, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn StyleObject(self: QStyleOptionHeader) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeader `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionHeader, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionHeader, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionHeader `
    ///
    pub fn Delete(self: QStyleOptionHeader) void {
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

    /// New constructs a new QStyleOptionHeaderV2 object.
    ///
    pub fn New() QStyleOptionHeaderV2 {
        return .{ .ptr = qtc.QStyleOptionHeaderV2_new() };
    }

    /// New2 constructs a new QStyleOptionHeaderV2 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionHeaderV2 `
    ///
    pub fn New2(other: anytype) QStyleOptionHeaderV2 {
        comptime _ = @TypeOf(other)._is_QStyleOptionHeaderV2;
        return .{ .ptr = qtc.QStyleOptionHeaderV2_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` param1: QStyleOptionHeaderV2 `
    ///
    pub fn OperatorAssign(self: QStyleOptionHeaderV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionHeaderV2;
        qtc.QStyleOptionHeaderV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn TextElideMode(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeaderV2_TextElideMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` textElideMode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: QStyleOptionHeaderV2, textElideMode: i32) void {
        qtc.QStyleOptionHeaderV2_SetTextElideMode(@ptrCast(self.ptr), @bitCast(textElideMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn IsSectionDragTarget(self: QStyleOptionHeaderV2) bool {
        return qtc.QStyleOptionHeaderV2_IsSectionDragTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` isSectionDragTarget: bool `
    ///
    pub fn SetIsSectionDragTarget(self: QStyleOptionHeaderV2, isSectionDragTarget: bool) void {
        qtc.QStyleOptionHeaderV2_SetIsSectionDragTarget(@ptrCast(self.ptr), isSectionDragTarget);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Unused(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeaderV2_Unused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` unused: i32 `
    ///
    pub fn SetUnused(self: QStyleOptionHeaderV2, unused: i32) void {
        qtc.QStyleOptionHeaderV2_SetUnused(@ptrCast(self.ptr), @bitCast(unused));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Section(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` section: i32 `
    ///
    pub fn SetSection(self: QStyleOptionHeaderV2, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self.ptr), @bitCast(section));
    }

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
    pub fn Text(self: QStyleOptionHeaderV2, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionheaderv2.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionHeaderV2, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn TextAlignment(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: QStyleOptionHeaderV2, textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self.ptr), @bitCast(textAlignment));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Icon(self: QStyleOptionHeaderV2) QIcon {
        return .{ .ptr = qtc.QStyleOptionHeader_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionHeaderV2, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn IconAlignment(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` iconAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetIconAlignment(self: QStyleOptionHeaderV2, iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self.ptr), @bitCast(iconAlignment));
    }

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
    pub fn Position(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` position: qstyleoption_enums.SectionPosition `
    ///
    pub fn SetPosition(self: QStyleOptionHeaderV2, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

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
    pub fn SelectedPosition(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: QStyleOptionHeaderV2, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(selectedPosition));
    }

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
    pub fn SortIndicator(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` sortIndicator: qstyleoption_enums.SortIndicator `
    ///
    pub fn SetSortIndicator(self: QStyleOptionHeaderV2, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self.ptr), @bitCast(sortIndicator));
    }

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
    pub fn Orientation(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QStyleOptionHeaderV2, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Version(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionHeaderV2, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Type(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionHeaderV2, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionHeaderV2, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionHeaderV2) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionHeaderV2, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Rect(self: QStyleOptionHeaderV2) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionHeaderV2, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn FontMetrics(self: QStyleOptionHeaderV2) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionHeaderV2, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Palette(self: QStyleOptionHeaderV2) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionHeaderV2, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn StyleObject(self: QStyleOptionHeaderV2) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionHeaderV2, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionHeaderV2, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionHeaderV2 `
    ///
    pub fn Delete(self: QStyleOptionHeaderV2) void {
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

    /// New constructs a new QStyleOptionButton object.
    ///
    pub fn New() QStyleOptionButton {
        return .{ .ptr = qtc.QStyleOptionButton_new() };
    }

    /// New2 constructs a new QStyleOptionButton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionButton `
    ///
    pub fn New2(other: anytype) QStyleOptionButton {
        comptime _ = @TypeOf(other)._is_QStyleOptionButton;
        return .{ .ptr = qtc.QStyleOptionButton_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Features(self: QStyleOptionButton) i32 {
        return qtc.QStyleOptionButton_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` features: flag of qstyleoption_enums.ButtonFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionButton, features: i32) void {
        qtc.QStyleOptionButton_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionButton, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionButton_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionbutton.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionButton, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionButton_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn Icon(self: QStyleOptionButton) QIcon {
        return .{ .ptr = qtc.QStyleOptionButton_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionButton, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionButton_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn IconSize(self: QStyleOptionButton) QSize {
        return .{ .ptr = qtc.QStyleOptionButton_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn SetIconSize(self: QStyleOptionButton, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QStyleOptionButton_SetIconSize(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` param1: QStyleOptionButton `
    ///
    pub fn OperatorAssign(self: QStyleOptionButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionButton;
        qtc.QStyleOptionButton_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn Version(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionButton, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn Type(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionButton, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionButton, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionButton) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionButton, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn Rect(self: QStyleOptionButton) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionButton, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn FontMetrics(self: QStyleOptionButton) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionButton, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn Palette(self: QStyleOptionButton) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionButton, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn StyleObject(self: QStyleOptionButton) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionButton `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionButton, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionButton, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionButton `
    ///
    pub fn Delete(self: QStyleOptionButton) void {
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

    /// New constructs a new QStyleOptionTab object.
    ///
    pub fn New() QStyleOptionTab {
        return .{ .ptr = qtc.QStyleOptionTab_new() };
    }

    /// New2 constructs a new QStyleOptionTab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTab `
    ///
    pub fn New2(other: anytype) QStyleOptionTab {
        comptime _ = @TypeOf(other)._is_QStyleOptionTab;
        return .{ .ptr = qtc.QStyleOptionTab_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Shape(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Shape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` shape: qtabbar_enums.Shape `
    ///
    pub fn SetShape(self: QStyleOptionTab, shape: i32) void {
        qtc.QStyleOptionTab_SetShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionTab, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionTab_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontab.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionTab, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionTab_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Icon(self: QStyleOptionTab) QIcon {
        return .{ .ptr = qtc.QStyleOptionTab_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionTab, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionTab_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Row(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Row(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` row: i32 `
    ///
    pub fn SetRow(self: QStyleOptionTab, row: i32) void {
        qtc.QStyleOptionTab_SetRow(@ptrCast(self.ptr), @bitCast(row));
    }

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
    pub fn Position(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` position: qstyleoption_enums.TabPosition `
    ///
    pub fn SetPosition(self: QStyleOptionTab, position: i32) void {
        qtc.QStyleOptionTab_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

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
    pub fn SelectedPosition(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: QStyleOptionTab, selectedPosition: i32) void {
        qtc.QStyleOptionTab_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(selectedPosition));
    }

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
    pub fn CornerWidgets(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_CornerWidgets(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` cornerWidgets: flag of qstyleoption_enums.CornerWidget `
    ///
    pub fn SetCornerWidgets(self: QStyleOptionTab, cornerWidgets: i32) void {
        qtc.QStyleOptionTab_SetCornerWidgets(@ptrCast(self.ptr), @bitCast(cornerWidgets));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn IconSize(self: QStyleOptionTab) QSize {
        return .{ .ptr = qtc.QStyleOptionTab_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn SetIconSize(self: QStyleOptionTab, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QStyleOptionTab_SetIconSize(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn DocumentMode(self: QStyleOptionTab) bool {
        return qtc.QStyleOptionTab_DocumentMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` documentMode: bool `
    ///
    pub fn SetDocumentMode(self: QStyleOptionTab, documentMode: bool) void {
        qtc.QStyleOptionTab_SetDocumentMode(@ptrCast(self.ptr), documentMode);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn LeftButtonSize(self: QStyleOptionTab) QSize {
        return .{ .ptr = qtc.QStyleOptionTab_LeftButtonSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` leftButtonSize: QSize `
    ///
    pub fn SetLeftButtonSize(self: QStyleOptionTab, leftButtonSize: anytype) void {
        comptime _ = @TypeOf(leftButtonSize)._is_QSize;
        qtc.QStyleOptionTab_SetLeftButtonSize(@ptrCast(self.ptr), @ptrCast(leftButtonSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn RightButtonSize(self: QStyleOptionTab) QSize {
        return .{ .ptr = qtc.QStyleOptionTab_RightButtonSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` rightButtonSize: QSize `
    ///
    pub fn SetRightButtonSize(self: QStyleOptionTab, rightButtonSize: anytype) void {
        comptime _ = @TypeOf(rightButtonSize)._is_QSize;
        qtc.QStyleOptionTab_SetRightButtonSize(@ptrCast(self.ptr), @ptrCast(rightButtonSize.ptr));
    }

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
    pub fn Features(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` features: flag of qstyleoption_enums.TabFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionTab, features: i32) void {
        qtc.QStyleOptionTab_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn TabIndex(self: QStyleOptionTab) i32 {
        return qtc.QStyleOptionTab_TabIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` tabIndex: i32 `
    ///
    pub fn SetTabIndex(self: QStyleOptionTab, tabIndex: i32) void {
        qtc.QStyleOptionTab_SetTabIndex(@ptrCast(self.ptr), @bitCast(tabIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` param1: QStyleOptionTab `
    ///
    pub fn OperatorAssign(self: QStyleOptionTab, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTab;
        qtc.QStyleOptionTab_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Version(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionTab, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Type(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionTab, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionTab, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionTab) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionTab, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Rect(self: QStyleOptionTab) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionTab, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn FontMetrics(self: QStyleOptionTab) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionTab, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Palette(self: QStyleOptionTab) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionTab, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn StyleObject(self: QStyleOptionTab) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTab `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionTab, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionTab, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTab `
    ///
    pub fn Delete(self: QStyleOptionTab) void {
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

    /// New constructs a new QStyleOptionToolBar object.
    ///
    pub fn New() QStyleOptionToolBar {
        return .{ .ptr = qtc.QStyleOptionToolBar_new() };
    }

    /// New2 constructs a new QStyleOptionToolBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionToolBar `
    ///
    pub fn New2(other: anytype) QStyleOptionToolBar {
        comptime _ = @TypeOf(other)._is_QStyleOptionToolBar;
        return .{ .ptr = qtc.QStyleOptionToolBar_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn PositionOfLine(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_PositionOfLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` positionOfLine: qstyleoption_enums.ToolBarPosition `
    ///
    pub fn SetPositionOfLine(self: QStyleOptionToolBar, positionOfLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionOfLine(@ptrCast(self.ptr), @bitCast(positionOfLine));
    }

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
    pub fn PositionWithinLine(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_PositionWithinLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` positionWithinLine: qstyleoption_enums.ToolBarPosition `
    ///
    pub fn SetPositionWithinLine(self: QStyleOptionToolBar, positionWithinLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionWithinLine(@ptrCast(self.ptr), @bitCast(positionWithinLine));
    }

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
    pub fn ToolBarArea(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_ToolBarArea(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` toolBarArea: qnamespace_enums.ToolBarArea `
    ///
    pub fn SetToolBarArea(self: QStyleOptionToolBar, toolBarArea: i32) void {
        qtc.QStyleOptionToolBar_SetToolBarArea(@ptrCast(self.ptr), @bitCast(toolBarArea));
    }

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
    pub fn Features(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` features: flag of qstyleoption_enums.ToolBarFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionToolBar, features: i32) void {
        qtc.QStyleOptionToolBar_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn LineWidth(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_LineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QStyleOptionToolBar, lineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn MidLineWidth(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOptionToolBar_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QStyleOptionToolBar, midLineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` param1: QStyleOptionToolBar `
    ///
    pub fn OperatorAssign(self: QStyleOptionToolBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionToolBar;
        qtc.QStyleOptionToolBar_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn Version(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionToolBar, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn Type(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionToolBar, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionToolBar, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionToolBar) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionToolBar, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn Rect(self: QStyleOptionToolBar) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionToolBar, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn FontMetrics(self: QStyleOptionToolBar) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionToolBar, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn Palette(self: QStyleOptionToolBar) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionToolBar, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn StyleObject(self: QStyleOptionToolBar) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionToolBar, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionToolBar, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionToolBar `
    ///
    pub fn Delete(self: QStyleOptionToolBar) void {
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

    /// New constructs a new QStyleOptionProgressBar object.
    ///
    pub fn New() QStyleOptionProgressBar {
        return .{ .ptr = qtc.QStyleOptionProgressBar_new() };
    }

    /// New2 constructs a new QStyleOptionProgressBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionProgressBar `
    ///
    pub fn New2(other: anytype) QStyleOptionProgressBar {
        comptime _ = @TypeOf(other)._is_QStyleOptionProgressBar;
        return .{ .ptr = qtc.QStyleOptionProgressBar_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Minimum(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_Minimum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` minimum: i32 `
    ///
    pub fn SetMinimum(self: QStyleOptionProgressBar, minimum: i32) void {
        qtc.QStyleOptionProgressBar_SetMinimum(@ptrCast(self.ptr), @bitCast(minimum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Maximum(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_Maximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximum(self: QStyleOptionProgressBar, maximum: i32) void {
        qtc.QStyleOptionProgressBar_SetMaximum(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Progress(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_Progress(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` progress: i32 `
    ///
    pub fn SetProgress(self: QStyleOptionProgressBar, progress: i32) void {
        qtc.QStyleOptionProgressBar_SetProgress(@ptrCast(self.ptr), @bitCast(progress));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionProgressBar, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionProgressBar_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionprogressbar.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionProgressBar, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionProgressBar_SetText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn TextAlignment(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOptionProgressBar_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: QStyleOptionProgressBar, textAlignment: i32) void {
        qtc.QStyleOptionProgressBar_SetTextAlignment(@ptrCast(self.ptr), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn TextVisible(self: QStyleOptionProgressBar) bool {
        return qtc.QStyleOptionProgressBar_TextVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` textVisible: bool `
    ///
    pub fn SetTextVisible(self: QStyleOptionProgressBar, textVisible: bool) void {
        qtc.QStyleOptionProgressBar_SetTextVisible(@ptrCast(self.ptr), textVisible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn InvertedAppearance(self: QStyleOptionProgressBar) bool {
        return qtc.QStyleOptionProgressBar_InvertedAppearance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` invertedAppearance: bool `
    ///
    pub fn SetInvertedAppearance(self: QStyleOptionProgressBar, invertedAppearance: bool) void {
        qtc.QStyleOptionProgressBar_SetInvertedAppearance(@ptrCast(self.ptr), invertedAppearance);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn BottomToTop(self: QStyleOptionProgressBar) bool {
        return qtc.QStyleOptionProgressBar_BottomToTop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` bottomToTop: bool `
    ///
    pub fn SetBottomToTop(self: QStyleOptionProgressBar, bottomToTop: bool) void {
        qtc.QStyleOptionProgressBar_SetBottomToTop(@ptrCast(self.ptr), bottomToTop);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` param1: QStyleOptionProgressBar `
    ///
    pub fn OperatorAssign(self: QStyleOptionProgressBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionProgressBar;
        qtc.QStyleOptionProgressBar_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Version(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionProgressBar, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Type(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionProgressBar, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionProgressBar, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionProgressBar) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionProgressBar, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Rect(self: QStyleOptionProgressBar) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionProgressBar, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn FontMetrics(self: QStyleOptionProgressBar) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionProgressBar, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Palette(self: QStyleOptionProgressBar) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionProgressBar, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn StyleObject(self: QStyleOptionProgressBar) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionProgressBar, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionProgressBar, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionProgressBar `
    ///
    pub fn Delete(self: QStyleOptionProgressBar) void {
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

    /// New constructs a new QStyleOptionMenuItem object.
    ///
    pub fn New() QStyleOptionMenuItem {
        return .{ .ptr = qtc.QStyleOptionMenuItem_new() };
    }

    /// New2 constructs a new QStyleOptionMenuItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionMenuItem `
    ///
    pub fn New2(other: anytype) QStyleOptionMenuItem {
        comptime _ = @TypeOf(other)._is_QStyleOptionMenuItem;
        return .{ .ptr = qtc.QStyleOptionMenuItem_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn MenuItemType(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_MenuItemType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` menuItemType: qstyleoption_enums.MenuItemType `
    ///
    pub fn SetMenuItemType(self: QStyleOptionMenuItem, menuItemType: i32) void {
        qtc.QStyleOptionMenuItem_SetMenuItemType(@ptrCast(self.ptr), @bitCast(menuItemType));
    }

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
    pub fn CheckType(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_CheckType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` checkType: qstyleoption_enums.CheckType `
    ///
    pub fn SetCheckType(self: QStyleOptionMenuItem, checkType: i32) void {
        qtc.QStyleOptionMenuItem_SetCheckType(@ptrCast(self.ptr), @bitCast(checkType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Checked(self: QStyleOptionMenuItem) bool {
        return qtc.QStyleOptionMenuItem_Checked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: QStyleOptionMenuItem, checked: bool) void {
        qtc.QStyleOptionMenuItem_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn MenuHasCheckableItems(self: QStyleOptionMenuItem) bool {
        return qtc.QStyleOptionMenuItem_MenuHasCheckableItems(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` menuHasCheckableItems: bool `
    ///
    pub fn SetMenuHasCheckableItems(self: QStyleOptionMenuItem, menuHasCheckableItems: bool) void {
        qtc.QStyleOptionMenuItem_SetMenuHasCheckableItems(@ptrCast(self.ptr), menuHasCheckableItems);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn MenuRect(self: QStyleOptionMenuItem) QRect {
        return .{ .ptr = qtc.QStyleOptionMenuItem_MenuRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` menuRect: QRect `
    ///
    pub fn SetMenuRect(self: QStyleOptionMenuItem, menuRect: anytype) void {
        comptime _ = @TypeOf(menuRect)._is_QRect;
        qtc.QStyleOptionMenuItem_SetMenuRect(@ptrCast(self.ptr), @ptrCast(menuRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionMenuItem, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionMenuItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionmenuitem.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionMenuItem, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionMenuItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Icon(self: QStyleOptionMenuItem) QIcon {
        return .{ .ptr = qtc.QStyleOptionMenuItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionMenuItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionMenuItem_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn MaxIconWidth(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_MaxIconWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` maxIconWidth: i32 `
    ///
    pub fn SetMaxIconWidth(self: QStyleOptionMenuItem, maxIconWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetMaxIconWidth(@ptrCast(self.ptr), @bitCast(maxIconWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn ReservedShortcutWidth(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOptionMenuItem_ReservedShortcutWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` reservedShortcutWidth: i32 `
    ///
    pub fn SetReservedShortcutWidth(self: QStyleOptionMenuItem, reservedShortcutWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetReservedShortcutWidth(@ptrCast(self.ptr), @bitCast(reservedShortcutWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Font(self: QStyleOptionMenuItem) QFont {
        return .{ .ptr = qtc.QStyleOptionMenuItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QStyleOptionMenuItem, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QStyleOptionMenuItem_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` param1: QStyleOptionMenuItem `
    ///
    pub fn OperatorAssign(self: QStyleOptionMenuItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionMenuItem;
        qtc.QStyleOptionMenuItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Version(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionMenuItem, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Type(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionMenuItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionMenuItem, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionMenuItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionMenuItem, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Rect(self: QStyleOptionMenuItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionMenuItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn FontMetrics(self: QStyleOptionMenuItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionMenuItem, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Palette(self: QStyleOptionMenuItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionMenuItem, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn StyleObject(self: QStyleOptionMenuItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionMenuItem, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionMenuItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionMenuItem `
    ///
    pub fn Delete(self: QStyleOptionMenuItem) void {
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

    /// New constructs a new QStyleOptionDockWidget object.
    ///
    pub fn New() QStyleOptionDockWidget {
        return .{ .ptr = qtc.QStyleOptionDockWidget_new() };
    }

    /// New2 constructs a new QStyleOptionDockWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionDockWidget `
    ///
    pub fn New2(other: anytype) QStyleOptionDockWidget {
        comptime _ = @TypeOf(other)._is_QStyleOptionDockWidget;
        return .{ .ptr = qtc.QStyleOptionDockWidget_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QStyleOptionDockWidget, allocator: std.mem.Allocator) []const u8 {
        var title_str = qtc.QStyleOptionDockWidget_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&title_str);
        const title_ret = allocator.alloc(u8, title_str.len) catch @panic("qstyleoptiondockwidget.Title: Memory allocation failed");
        @memcpy(title_ret, title_str.data[0..title_str.len]);
        return title_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QStyleOptionDockWidget, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QStyleOptionDockWidget_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Closable(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_Closable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` closable: bool `
    ///
    pub fn SetClosable(self: QStyleOptionDockWidget, closable: bool) void {
        qtc.QStyleOptionDockWidget_SetClosable(@ptrCast(self.ptr), closable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Movable(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_Movable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` movable: bool `
    ///
    pub fn SetMovable(self: QStyleOptionDockWidget, movable: bool) void {
        qtc.QStyleOptionDockWidget_SetMovable(@ptrCast(self.ptr), movable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Floatable(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_Floatable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` floatable: bool `
    ///
    pub fn SetFloatable(self: QStyleOptionDockWidget, floatable: bool) void {
        qtc.QStyleOptionDockWidget_SetFloatable(@ptrCast(self.ptr), floatable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn VerticalTitleBar(self: QStyleOptionDockWidget) bool {
        return qtc.QStyleOptionDockWidget_VerticalTitleBar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` verticalTitleBar: bool `
    ///
    pub fn SetVerticalTitleBar(self: QStyleOptionDockWidget, verticalTitleBar: bool) void {
        qtc.QStyleOptionDockWidget_SetVerticalTitleBar(@ptrCast(self.ptr), verticalTitleBar);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` param1: QStyleOptionDockWidget `
    ///
    pub fn OperatorAssign(self: QStyleOptionDockWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionDockWidget;
        qtc.QStyleOptionDockWidget_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Version(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionDockWidget, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Type(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionDockWidget, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionDockWidget, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionDockWidget) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionDockWidget, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Rect(self: QStyleOptionDockWidget) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionDockWidget, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn FontMetrics(self: QStyleOptionDockWidget) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionDockWidget, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Palette(self: QStyleOptionDockWidget) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionDockWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn StyleObject(self: QStyleOptionDockWidget) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionDockWidget, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionDockWidget, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionDockWidget `
    ///
    pub fn Delete(self: QStyleOptionDockWidget) void {
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

    /// New constructs a new QStyleOptionViewItem object.
    ///
    pub fn New() QStyleOptionViewItem {
        return .{ .ptr = qtc.QStyleOptionViewItem_new() };
    }

    /// New2 constructs a new QStyleOptionViewItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionViewItem `
    ///
    pub fn New2(other: anytype) QStyleOptionViewItem {
        comptime _ = @TypeOf(other)._is_QStyleOptionViewItem;
        return .{ .ptr = qtc.QStyleOptionViewItem_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn DisplayAlignment(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_DisplayAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` displayAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetDisplayAlignment(self: QStyleOptionViewItem, displayAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDisplayAlignment(@ptrCast(self.ptr), @bitCast(displayAlignment));
    }

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
    pub fn DecorationAlignment(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_DecorationAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` decorationAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetDecorationAlignment(self: QStyleOptionViewItem, decorationAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationAlignment(@ptrCast(self.ptr), @bitCast(decorationAlignment));
    }

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
    pub fn TextElideMode(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_TextElideMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` textElideMode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: QStyleOptionViewItem, textElideMode: i32) void {
        qtc.QStyleOptionViewItem_SetTextElideMode(@ptrCast(self.ptr), @bitCast(textElideMode));
    }

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
    pub fn DecorationPosition(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_DecorationPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` decorationPosition: qstyleoption_enums.Position `
    ///
    pub fn SetDecorationPosition(self: QStyleOptionViewItem, decorationPosition: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationPosition(@ptrCast(self.ptr), @bitCast(decorationPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn DecorationSize(self: QStyleOptionViewItem) QSize {
        return .{ .ptr = qtc.QStyleOptionViewItem_DecorationSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` decorationSize: QSize `
    ///
    pub fn SetDecorationSize(self: QStyleOptionViewItem, decorationSize: anytype) void {
        comptime _ = @TypeOf(decorationSize)._is_QSize;
        qtc.QStyleOptionViewItem_SetDecorationSize(@ptrCast(self.ptr), @ptrCast(decorationSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Font(self: QStyleOptionViewItem) QFont {
        return .{ .ptr = qtc.QStyleOptionViewItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QStyleOptionViewItem, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QStyleOptionViewItem_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn ShowDecorationSelected(self: QStyleOptionViewItem) bool {
        return qtc.QStyleOptionViewItem_ShowDecorationSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` showDecorationSelected: bool `
    ///
    pub fn SetShowDecorationSelected(self: QStyleOptionViewItem, showDecorationSelected: bool) void {
        qtc.QStyleOptionViewItem_SetShowDecorationSelected(@ptrCast(self.ptr), showDecorationSelected);
    }

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
    pub fn Features(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` features: flag of qstyleoption_enums.ViewItemFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionViewItem, features: i32) void {
        qtc.QStyleOptionViewItem_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Locale(self: QStyleOptionViewItem) QLocale {
        return .{ .ptr = qtc.QStyleOptionViewItem_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QStyleOptionViewItem, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QStyleOptionViewItem_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Widget(self: QStyleOptionViewItem) QWidget {
        return .{ .ptr = qtc.QStyleOptionViewItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QStyleOptionViewItem, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyleOptionViewItem_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Index(self: QStyleOptionViewItem) QModelIndex {
        return .{ .ptr = qtc.QStyleOptionViewItem_Index(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetIndex(self: QStyleOptionViewItem, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QStyleOptionViewItem_SetIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn CheckState(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_CheckState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` checkState: qnamespace_enums.CheckState `
    ///
    pub fn SetCheckState(self: QStyleOptionViewItem, checkState: i32) void {
        qtc.QStyleOptionViewItem_SetCheckState(@ptrCast(self.ptr), @bitCast(checkState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Icon(self: QStyleOptionViewItem) QIcon {
        return .{ .ptr = qtc.QStyleOptionViewItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionViewItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionViewItem_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionViewItem, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionViewItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionviewitem.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionViewItem, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionViewItem_SetText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn ViewItemPosition(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOptionViewItem_ViewItemPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` viewItemPosition: qstyleoption_enums.ViewItemPosition `
    ///
    pub fn SetViewItemPosition(self: QStyleOptionViewItem, viewItemPosition: i32) void {
        qtc.QStyleOptionViewItem_SetViewItemPosition(@ptrCast(self.ptr), @bitCast(viewItemPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn BackgroundBrush(self: QStyleOptionViewItem) QBrush {
        return .{ .ptr = qtc.QStyleOptionViewItem_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` backgroundBrush: QBrush `
    ///
    pub fn SetBackgroundBrush(self: QStyleOptionViewItem, backgroundBrush: anytype) void {
        comptime _ = @TypeOf(backgroundBrush)._is_QBrush;
        qtc.QStyleOptionViewItem_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(backgroundBrush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` param1: QStyleOptionViewItem `
    ///
    pub fn OperatorAssign(self: QStyleOptionViewItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionViewItem;
        qtc.QStyleOptionViewItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Version(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionViewItem, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Type(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionViewItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionViewItem, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionViewItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionViewItem, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Rect(self: QStyleOptionViewItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionViewItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn FontMetrics(self: QStyleOptionViewItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionViewItem, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Palette(self: QStyleOptionViewItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionViewItem, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn StyleObject(self: QStyleOptionViewItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionViewItem, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionViewItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionViewItem `
    ///
    pub fn Delete(self: QStyleOptionViewItem) void {
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

    /// New constructs a new QStyleOptionToolBox object.
    ///
    pub fn New() QStyleOptionToolBox {
        return .{ .ptr = qtc.QStyleOptionToolBox_new() };
    }

    /// New2 constructs a new QStyleOptionToolBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionToolBox `
    ///
    pub fn New2(other: anytype) QStyleOptionToolBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionToolBox;
        return .{ .ptr = qtc.QStyleOptionToolBox_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionToolBox, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionToolBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbox.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionToolBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionToolBox_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn Icon(self: QStyleOptionToolBox) QIcon {
        return .{ .ptr = qtc.QStyleOptionToolBox_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionToolBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionToolBox_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn Position(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOptionToolBox_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` position: qstyleoption_enums.TabPosition `
    ///
    pub fn SetPosition(self: QStyleOptionToolBox, position: i32) void {
        qtc.QStyleOptionToolBox_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

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
    pub fn SelectedPosition(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOptionToolBox_SelectedPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: QStyleOptionToolBox, selectedPosition: i32) void {
        qtc.QStyleOptionToolBox_SetSelectedPosition(@ptrCast(self.ptr), @bitCast(selectedPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` param1: QStyleOptionToolBox `
    ///
    pub fn OperatorAssign(self: QStyleOptionToolBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionToolBox;
        qtc.QStyleOptionToolBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn Version(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionToolBox, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn Type(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionToolBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionToolBox, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionToolBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionToolBox, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn Rect(self: QStyleOptionToolBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionToolBox, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn FontMetrics(self: QStyleOptionToolBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionToolBox, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn Palette(self: QStyleOptionToolBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionToolBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn StyleObject(self: QStyleOptionToolBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionToolBox, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionToolBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionToolBox `
    ///
    pub fn Delete(self: QStyleOptionToolBox) void {
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

    /// New constructs a new QStyleOptionRubberBand object.
    ///
    pub fn New() QStyleOptionRubberBand {
        return .{ .ptr = qtc.QStyleOptionRubberBand_new() };
    }

    /// New2 constructs a new QStyleOptionRubberBand object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionRubberBand `
    ///
    pub fn New2(other: anytype) QStyleOptionRubberBand {
        comptime _ = @TypeOf(other)._is_QStyleOptionRubberBand;
        return .{ .ptr = qtc.QStyleOptionRubberBand_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Shape(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOptionRubberBand_Shape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` shape: qrubberband_enums.Shape `
    ///
    pub fn SetShape(self: QStyleOptionRubberBand, shape: i32) void {
        qtc.QStyleOptionRubberBand_SetShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn Opaque(self: QStyleOptionRubberBand) bool {
        return qtc.QStyleOptionRubberBand_Opaque(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` opaque: bool `
    ///
    pub fn SetOpaque(self: QStyleOptionRubberBand, _opaque: bool) void {
        qtc.QStyleOptionRubberBand_SetOpaque(@ptrCast(self.ptr), _opaque);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` param1: QStyleOptionRubberBand `
    ///
    pub fn OperatorAssign(self: QStyleOptionRubberBand, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionRubberBand;
        qtc.QStyleOptionRubberBand_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn Version(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionRubberBand, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn Type(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionRubberBand, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionRubberBand, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionRubberBand) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionRubberBand, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn Rect(self: QStyleOptionRubberBand) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionRubberBand, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn FontMetrics(self: QStyleOptionRubberBand) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionRubberBand, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn Palette(self: QStyleOptionRubberBand) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionRubberBand, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn StyleObject(self: QStyleOptionRubberBand) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionRubberBand, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionRubberBand, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionRubberBand `
    ///
    pub fn Delete(self: QStyleOptionRubberBand) void {
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

    /// New constructs a new QStyleOptionComplex object.
    ///
    pub fn New() QStyleOptionComplex {
        return .{ .ptr = qtc.QStyleOptionComplex_new() };
    }

    /// New2 constructs a new QStyleOptionComplex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionComplex `
    ///
    pub fn New2(other: anytype) QStyleOptionComplex {
        comptime _ = @TypeOf(other)._is_QStyleOptionComplex;
        return .{ .ptr = qtc.QStyleOptionComplex_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QStyleOptionComplex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    pub fn New3(version: i32) QStyleOptionComplex {
        return .{ .ptr = qtc.QStyleOptionComplex_new3(@bitCast(version)) };
    }

    /// New4 constructs a new QStyleOptionComplex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New4(version: i32, typeVal: i32) QStyleOptionComplex {
        return .{ .ptr = qtc.QStyleOptionComplex_new4(@bitCast(version), @bitCast(typeVal)) };
    }

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
    pub fn SubControls(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionComplex, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionComplex, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` param1: QStyleOptionComplex `
    ///
    pub fn OperatorAssign(self: QStyleOptionComplex, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionComplex;
        qtc.QStyleOptionComplex_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn Version(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionComplex, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn Type(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionComplex, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionComplex, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionComplex) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionComplex, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn Rect(self: QStyleOptionComplex) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionComplex, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn FontMetrics(self: QStyleOptionComplex) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionComplex, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn Palette(self: QStyleOptionComplex) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionComplex, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn StyleObject(self: QStyleOptionComplex) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComplex `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionComplex, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionComplex, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionComplex `
    ///
    pub fn Delete(self: QStyleOptionComplex) void {
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

    /// New constructs a new QStyleOptionSlider object.
    ///
    pub fn New() QStyleOptionSlider {
        return .{ .ptr = qtc.QStyleOptionSlider_new() };
    }

    /// New2 constructs a new QStyleOptionSlider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionSlider `
    ///
    pub fn New2(other: anytype) QStyleOptionSlider {
        comptime _ = @TypeOf(other)._is_QStyleOptionSlider;
        return .{ .ptr = qtc.QStyleOptionSlider_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Orientation(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QStyleOptionSlider, orientation: i32) void {
        qtc.QStyleOptionSlider_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Minimum(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_Minimum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` minimum: i32 `
    ///
    pub fn SetMinimum(self: QStyleOptionSlider, minimum: i32) void {
        qtc.QStyleOptionSlider_SetMinimum(@ptrCast(self.ptr), @bitCast(minimum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Maximum(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_Maximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximum(self: QStyleOptionSlider, maximum: i32) void {
        qtc.QStyleOptionSlider_SetMaximum(@ptrCast(self.ptr), @bitCast(maximum));
    }

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
    pub fn TickPosition(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_TickPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` tickPosition: qslider_enums.TickPosition `
    ///
    pub fn SetTickPosition(self: QStyleOptionSlider, tickPosition: i32) void {
        qtc.QStyleOptionSlider_SetTickPosition(@ptrCast(self.ptr), @bitCast(tickPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn TickInterval(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_TickInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` tickInterval: i32 `
    ///
    pub fn SetTickInterval(self: QStyleOptionSlider, tickInterval: i32) void {
        qtc.QStyleOptionSlider_SetTickInterval(@ptrCast(self.ptr), @bitCast(tickInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn UpsideDown(self: QStyleOptionSlider) bool {
        return qtc.QStyleOptionSlider_UpsideDown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn SetUpsideDown(self: QStyleOptionSlider, upsideDown: bool) void {
        qtc.QStyleOptionSlider_SetUpsideDown(@ptrCast(self.ptr), upsideDown);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn SliderPosition(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_SliderPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` sliderPosition: i32 `
    ///
    pub fn SetSliderPosition(self: QStyleOptionSlider, sliderPosition: i32) void {
        qtc.QStyleOptionSlider_SetSliderPosition(@ptrCast(self.ptr), @bitCast(sliderPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn SliderValue(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_SliderValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` sliderValue: i32 `
    ///
    pub fn SetSliderValue(self: QStyleOptionSlider, sliderValue: i32) void {
        qtc.QStyleOptionSlider_SetSliderValue(@ptrCast(self.ptr), @bitCast(sliderValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn SingleStep(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_SingleStep(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` singleStep: i32 `
    ///
    pub fn SetSingleStep(self: QStyleOptionSlider, singleStep: i32) void {
        qtc.QStyleOptionSlider_SetSingleStep(@ptrCast(self.ptr), @bitCast(singleStep));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn PageStep(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_PageStep(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` pageStep: i32 `
    ///
    pub fn SetPageStep(self: QStyleOptionSlider, pageStep: i32) void {
        qtc.QStyleOptionSlider_SetPageStep(@ptrCast(self.ptr), @bitCast(pageStep));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn NotchTarget(self: QStyleOptionSlider) f64 {
        return qtc.QStyleOptionSlider_NotchTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` notchTarget: f64 `
    ///
    pub fn SetNotchTarget(self: QStyleOptionSlider, notchTarget: f64) void {
        qtc.QStyleOptionSlider_SetNotchTarget(@ptrCast(self.ptr), @bitCast(notchTarget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn DialWrapping(self: QStyleOptionSlider) bool {
        return qtc.QStyleOptionSlider_DialWrapping(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` dialWrapping: bool `
    ///
    pub fn SetDialWrapping(self: QStyleOptionSlider, dialWrapping: bool) void {
        qtc.QStyleOptionSlider_SetDialWrapping(@ptrCast(self.ptr), dialWrapping);
    }

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
    pub fn KeyboardModifiers(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionSlider_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` keyboardModifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetKeyboardModifiers(self: QStyleOptionSlider, keyboardModifiers: i32) void {
        qtc.QStyleOptionSlider_SetKeyboardModifiers(@ptrCast(self.ptr), @bitCast(keyboardModifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` param1: QStyleOptionSlider `
    ///
    pub fn OperatorAssign(self: QStyleOptionSlider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionSlider;
        qtc.QStyleOptionSlider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionSlider, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionSlider, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Version(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionSlider, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Type(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionSlider, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionSlider, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionSlider) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionSlider, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Rect(self: QStyleOptionSlider) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionSlider, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn FontMetrics(self: QStyleOptionSlider) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionSlider, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Palette(self: QStyleOptionSlider) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionSlider, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn StyleObject(self: QStyleOptionSlider) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSlider `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionSlider, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionSlider, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionSlider `
    ///
    pub fn Delete(self: QStyleOptionSlider) void {
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

    /// New constructs a new QStyleOptionSpinBox object.
    ///
    pub fn New() QStyleOptionSpinBox {
        return .{ .ptr = qtc.QStyleOptionSpinBox_new() };
    }

    /// New2 constructs a new QStyleOptionSpinBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionSpinBox `
    ///
    pub fn New2(other: anytype) QStyleOptionSpinBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionSpinBox;
        return .{ .ptr = qtc.QStyleOptionSpinBox_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn ButtonSymbols(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` buttonSymbols: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: QStyleOptionSpinBox, buttonSymbols: i32) void {
        qtc.QStyleOptionSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(buttonSymbols));
    }

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
    pub fn StepEnabled(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionSpinBox_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` stepEnabled: flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SetStepEnabled(self: QStyleOptionSpinBox, stepEnabled: i32) void {
        qtc.QStyleOptionSpinBox_SetStepEnabled(@ptrCast(self.ptr), @bitCast(stepEnabled));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn Frame(self: QStyleOptionSpinBox) bool {
        return qtc.QStyleOptionSpinBox_Frame(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QStyleOptionSpinBox, frame: bool) void {
        qtc.QStyleOptionSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` param1: QStyleOptionSpinBox `
    ///
    pub fn OperatorAssign(self: QStyleOptionSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionSpinBox;
        qtc.QStyleOptionSpinBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionSpinBox, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionSpinBox, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn Version(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionSpinBox, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn Type(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionSpinBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionSpinBox, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionSpinBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionSpinBox, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn Rect(self: QStyleOptionSpinBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionSpinBox, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn FontMetrics(self: QStyleOptionSpinBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionSpinBox, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn Palette(self: QStyleOptionSpinBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionSpinBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn StyleObject(self: QStyleOptionSpinBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionSpinBox, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionSpinBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionSpinBox `
    ///
    pub fn Delete(self: QStyleOptionSpinBox) void {
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

    /// New constructs a new QStyleOptionToolButton object.
    ///
    pub fn New() QStyleOptionToolButton {
        return .{ .ptr = qtc.QStyleOptionToolButton_new() };
    }

    /// New2 constructs a new QStyleOptionToolButton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionToolButton `
    ///
    pub fn New2(other: anytype) QStyleOptionToolButton {
        comptime _ = @TypeOf(other)._is_QStyleOptionToolButton;
        return .{ .ptr = qtc.QStyleOptionToolButton_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Features(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionToolButton_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` features: flag of qstyleoption_enums.ToolButtonFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionToolButton, features: i32) void {
        qtc.QStyleOptionToolButton_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Icon(self: QStyleOptionToolButton) QIcon {
        return .{ .ptr = qtc.QStyleOptionToolButton_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionToolButton, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionToolButton_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn IconSize(self: QStyleOptionToolButton) QSize {
        return .{ .ptr = qtc.QStyleOptionToolButton_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn SetIconSize(self: QStyleOptionToolButton, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QStyleOptionToolButton_SetIconSize(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionToolButton, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionToolButton_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbutton.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionToolButton, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionToolButton_SetText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn ArrowType(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionToolButton_ArrowType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` arrowType: qnamespace_enums.ArrowType `
    ///
    pub fn SetArrowType(self: QStyleOptionToolButton, arrowType: i32) void {
        qtc.QStyleOptionToolButton_SetArrowType(@ptrCast(self.ptr), @bitCast(arrowType));
    }

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
    pub fn ToolButtonStyle(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionToolButton_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn SetToolButtonStyle(self: QStyleOptionToolButton, toolButtonStyle: i32) void {
        qtc.QStyleOptionToolButton_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(toolButtonStyle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Pos(self: QStyleOptionToolButton) QPoint {
        return .{ .ptr = qtc.QStyleOptionToolButton_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetPos(self: QStyleOptionToolButton, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QStyleOptionToolButton_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Font(self: QStyleOptionToolButton) QFont {
        return .{ .ptr = qtc.QStyleOptionToolButton_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QStyleOptionToolButton, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QStyleOptionToolButton_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` param1: QStyleOptionToolButton `
    ///
    pub fn OperatorAssign(self: QStyleOptionToolButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionToolButton;
        qtc.QStyleOptionToolButton_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionToolButton, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionToolButton, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Version(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionToolButton, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Type(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionToolButton, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionToolButton, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionToolButton) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionToolButton, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Rect(self: QStyleOptionToolButton) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionToolButton, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn FontMetrics(self: QStyleOptionToolButton) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionToolButton, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Palette(self: QStyleOptionToolButton) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionToolButton, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn StyleObject(self: QStyleOptionToolButton) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionToolButton, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionToolButton, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionToolButton `
    ///
    pub fn Delete(self: QStyleOptionToolButton) void {
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

    /// New constructs a new QStyleOptionComboBox object.
    ///
    pub fn New() QStyleOptionComboBox {
        return .{ .ptr = qtc.QStyleOptionComboBox_new() };
    }

    /// New2 constructs a new QStyleOptionComboBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionComboBox `
    ///
    pub fn New2(other: anytype) QStyleOptionComboBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionComboBox;
        return .{ .ptr = qtc.QStyleOptionComboBox_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Editable(self: QStyleOptionComboBox) bool {
        return qtc.QStyleOptionComboBox_Editable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: QStyleOptionComboBox, editable: bool) void {
        qtc.QStyleOptionComboBox_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn PopupRect(self: QStyleOptionComboBox) QRect {
        return .{ .ptr = qtc.QStyleOptionComboBox_PopupRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` popupRect: QRect `
    ///
    pub fn SetPopupRect(self: QStyleOptionComboBox, popupRect: anytype) void {
        comptime _ = @TypeOf(popupRect)._is_QRect;
        qtc.QStyleOptionComboBox_SetPopupRect(@ptrCast(self.ptr), @ptrCast(popupRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Frame(self: QStyleOptionComboBox) bool {
        return qtc.QStyleOptionComboBox_Frame(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QStyleOptionComboBox, frame: bool) void {
        qtc.QStyleOptionComboBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentText(self: QStyleOptionComboBox, allocator: std.mem.Allocator) []const u8 {
        var currentText_str = qtc.QStyleOptionComboBox_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&currentText_str);
        const currentText_ret = allocator.alloc(u8, currentText_str.len) catch @panic("qstyleoptioncombobox.CurrentText: Memory allocation failed");
        @memcpy(currentText_ret, currentText_str.data[0..currentText_str.len]);
        return currentText_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` currentText: []const u8 `
    ///
    pub fn SetCurrentText(self: QStyleOptionComboBox, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
            .len = currentText.len,
            .data = currentText.ptr,
        };
        qtc.QStyleOptionComboBox_SetCurrentText(@ptrCast(self.ptr), currentText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn CurrentIcon(self: QStyleOptionComboBox) QIcon {
        return .{ .ptr = qtc.QStyleOptionComboBox_CurrentIcon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` currentIcon: QIcon `
    ///
    pub fn SetCurrentIcon(self: QStyleOptionComboBox, currentIcon: anytype) void {
        comptime _ = @TypeOf(currentIcon)._is_QIcon;
        qtc.QStyleOptionComboBox_SetCurrentIcon(@ptrCast(self.ptr), @ptrCast(currentIcon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn IconSize(self: QStyleOptionComboBox) QSize {
        return .{ .ptr = qtc.QStyleOptionComboBox_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn SetIconSize(self: QStyleOptionComboBox, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QStyleOptionComboBox_SetIconSize(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

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
    pub fn TextAlignment(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOptionComboBox_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: QStyleOptionComboBox, textAlignment: i32) void {
        qtc.QStyleOptionComboBox_SetTextAlignment(@ptrCast(self.ptr), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` param1: QStyleOptionComboBox `
    ///
    pub fn OperatorAssign(self: QStyleOptionComboBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionComboBox;
        qtc.QStyleOptionComboBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionComboBox, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionComboBox, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Version(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionComboBox, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Type(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionComboBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionComboBox, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionComboBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionComboBox, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Rect(self: QStyleOptionComboBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionComboBox, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn FontMetrics(self: QStyleOptionComboBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionComboBox, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Palette(self: QStyleOptionComboBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionComboBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn StyleObject(self: QStyleOptionComboBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionComboBox, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionComboBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionComboBox `
    ///
    pub fn Delete(self: QStyleOptionComboBox) void {
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

    /// New constructs a new QStyleOptionTitleBar object.
    ///
    pub fn New() QStyleOptionTitleBar {
        return .{ .ptr = qtc.QStyleOptionTitleBar_new() };
    }

    /// New2 constructs a new QStyleOptionTitleBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionTitleBar `
    ///
    pub fn New2(other: anytype) QStyleOptionTitleBar {
        comptime _ = @TypeOf(other)._is_QStyleOptionTitleBar;
        return .{ .ptr = qtc.QStyleOptionTitleBar_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionTitleBar, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionTitleBar_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontitlebar.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionTitleBar, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionTitleBar_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn Icon(self: QStyleOptionTitleBar) QIcon {
        return .{ .ptr = qtc.QStyleOptionTitleBar_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QStyleOptionTitleBar, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QStyleOptionTitleBar_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn TitleBarState(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` titleBarState: i32 `
    ///
    pub fn SetTitleBarState(self: QStyleOptionTitleBar, titleBarState: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarState(@ptrCast(self.ptr), @bitCast(titleBarState));
    }

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
    pub fn TitleBarFlags(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` titleBarFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetTitleBarFlags(self: QStyleOptionTitleBar, titleBarFlags: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarFlags(@ptrCast(self.ptr), @bitCast(titleBarFlags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` param1: QStyleOptionTitleBar `
    ///
    pub fn OperatorAssign(self: QStyleOptionTitleBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionTitleBar;
        qtc.QStyleOptionTitleBar_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionTitleBar, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionTitleBar, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn Version(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionTitleBar, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn Type(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionTitleBar, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionTitleBar, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionTitleBar) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionTitleBar, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn Rect(self: QStyleOptionTitleBar) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionTitleBar, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn FontMetrics(self: QStyleOptionTitleBar) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionTitleBar, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn Palette(self: QStyleOptionTitleBar) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionTitleBar, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn StyleObject(self: QStyleOptionTitleBar) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionTitleBar, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionTitleBar, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionTitleBar `
    ///
    pub fn Delete(self: QStyleOptionTitleBar) void {
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

    /// New constructs a new QStyleOptionGroupBox object.
    ///
    pub fn New() QStyleOptionGroupBox {
        return .{ .ptr = qtc.QStyleOptionGroupBox_new() };
    }

    /// New2 constructs a new QStyleOptionGroupBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionGroupBox `
    ///
    pub fn New2(other: anytype) QStyleOptionGroupBox {
        comptime _ = @TypeOf(other)._is_QStyleOptionGroupBox;
        return .{ .ptr = qtc.QStyleOptionGroupBox_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Features(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` features: flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn SetFeatures(self: QStyleOptionGroupBox, features: i32) void {
        qtc.QStyleOptionGroupBox_SetFeatures(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStyleOptionGroupBox, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionGroupBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiongroupbox.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStyleOptionGroupBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionGroupBox_SetText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn TextAlignment(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: QStyleOptionGroupBox, textAlignment: i32) void {
        qtc.QStyleOptionGroupBox_SetTextAlignment(@ptrCast(self.ptr), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn TextColor(self: QStyleOptionGroupBox) QColor {
        return .{ .ptr = qtc.QStyleOptionGroupBox_TextColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` textColor: QColor `
    ///
    pub fn SetTextColor(self: QStyleOptionGroupBox, textColor: anytype) void {
        comptime _ = @TypeOf(textColor)._is_QColor;
        qtc.QStyleOptionGroupBox_SetTextColor(@ptrCast(self.ptr), @ptrCast(textColor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn LineWidth(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_LineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QStyleOptionGroupBox, lineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn MidLineWidth(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionGroupBox_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QStyleOptionGroupBox, midLineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` param1: QStyleOptionGroupBox `
    ///
    pub fn OperatorAssign(self: QStyleOptionGroupBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionGroupBox;
        qtc.QStyleOptionGroupBox_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionGroupBox, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionGroupBox, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn Version(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionGroupBox, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn Type(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionGroupBox, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionGroupBox, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionGroupBox) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionGroupBox, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn Rect(self: QStyleOptionGroupBox) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionGroupBox, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn FontMetrics(self: QStyleOptionGroupBox) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionGroupBox, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn Palette(self: QStyleOptionGroupBox) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionGroupBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn StyleObject(self: QStyleOptionGroupBox) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionGroupBox, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionGroupBox, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionGroupBox `
    ///
    pub fn Delete(self: QStyleOptionGroupBox) void {
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

    /// New constructs a new QStyleOptionSizeGrip object.
    ///
    pub fn New() QStyleOptionSizeGrip {
        return .{ .ptr = qtc.QStyleOptionSizeGrip_new() };
    }

    /// New2 constructs a new QStyleOptionSizeGrip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionSizeGrip `
    ///
    pub fn New2(other: anytype) QStyleOptionSizeGrip {
        comptime _ = @TypeOf(other)._is_QStyleOptionSizeGrip;
        return .{ .ptr = qtc.QStyleOptionSizeGrip_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Corner(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOptionSizeGrip_Corner(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` corner: qnamespace_enums.Corner `
    ///
    pub fn SetCorner(self: QStyleOptionSizeGrip, corner: i32) void {
        qtc.QStyleOptionSizeGrip_SetCorner(@ptrCast(self.ptr), @bitCast(corner));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` param1: QStyleOptionSizeGrip `
    ///
    pub fn OperatorAssign(self: QStyleOptionSizeGrip, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionSizeGrip;
        qtc.QStyleOptionSizeGrip_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SubControls(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: QStyleOptionSizeGrip, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self.ptr), @bitCast(subControls));
    }

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
    pub fn ActiveSubControls(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: QStyleOptionSizeGrip, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self.ptr), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn Version(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionSizeGrip, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn Type(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionSizeGrip, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionSizeGrip, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionSizeGrip) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionSizeGrip, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn Rect(self: QStyleOptionSizeGrip) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionSizeGrip, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn FontMetrics(self: QStyleOptionSizeGrip) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionSizeGrip, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn Palette(self: QStyleOptionSizeGrip) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionSizeGrip, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn StyleObject(self: QStyleOptionSizeGrip) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionSizeGrip, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionSizeGrip, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionSizeGrip `
    ///
    pub fn Delete(self: QStyleOptionSizeGrip) void {
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

    /// New constructs a new QStyleOptionGraphicsItem object.
    ///
    pub fn New() QStyleOptionGraphicsItem {
        return .{ .ptr = qtc.QStyleOptionGraphicsItem_new() };
    }

    /// New2 constructs a new QStyleOptionGraphicsItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleOptionGraphicsItem `
    ///
    pub fn New2(other: anytype) QStyleOptionGraphicsItem {
        comptime _ = @TypeOf(other)._is_QStyleOptionGraphicsItem;
        return .{ .ptr = qtc.QStyleOptionGraphicsItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn ExposedRect(self: QStyleOptionGraphicsItem) QRectF {
        return .{ .ptr = qtc.QStyleOptionGraphicsItem_ExposedRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` exposedRect: QRectF `
    ///
    pub fn SetExposedRect(self: QStyleOptionGraphicsItem, exposedRect: anytype) void {
        comptime _ = @TypeOf(exposedRect)._is_QRectF;
        qtc.QStyleOptionGraphicsItem_SetExposedRect(@ptrCast(self.ptr), @ptrCast(exposedRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` param1: QStyleOptionGraphicsItem `
    ///
    pub fn OperatorAssign(self: QStyleOptionGraphicsItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleOptionGraphicsItem;
        qtc.QStyleOptionGraphicsItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` worldTransform: QTransform `
    ///
    pub fn LevelOfDetailFromTransform(worldTransform: anytype) f64 {
        comptime _ = @TypeOf(worldTransform)._is_QTransform;
        return qtc.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(@ptrCast(worldTransform.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn Version(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleOptionGraphicsItem, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn Type(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleOptionGraphicsItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

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
    pub fn State(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: QStyleOptionGraphicsItem, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn Direction(self: QStyleOptionGraphicsItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: QStyleOptionGraphicsItem, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn Rect(self: QStyleOptionGraphicsItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: QStyleOptionGraphicsItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn FontMetrics(self: QStyleOptionGraphicsItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: QStyleOptionGraphicsItem, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn Palette(self: QStyleOptionGraphicsItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QStyleOptionGraphicsItem, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn StyleObject(self: QStyleOptionGraphicsItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: QStyleOptionGraphicsItem, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

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
    pub fn InitFrom(self: QStyleOptionGraphicsItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleOptionGraphicsItem `
    ///
    pub fn Delete(self: QStyleOptionGraphicsItem) void {
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

    /// New constructs a new QStyleHintReturn object.
    ///
    pub fn New() QStyleHintReturn {
        return .{ .ptr = qtc.QStyleHintReturn_new() };
    }

    /// New2 constructs a new QStyleHintReturn object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStyleHintReturn `
    ///
    pub fn New2(param1: anytype) QStyleHintReturn {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturn;
        return .{ .ptr = qtc.QStyleHintReturn_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new QStyleHintReturn object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    pub fn New3(version: i32) QStyleHintReturn {
        return .{ .ptr = qtc.QStyleHintReturn_new3(@bitCast(version)) };
    }

    /// New4 constructs a new QStyleHintReturn object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New4(version: i32, typeVal: i32) QStyleHintReturn {
        return .{ .ptr = qtc.QStyleHintReturn_new4(@bitCast(version), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    pub fn Version(self: QStyleHintReturn) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleHintReturn, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    pub fn Type(self: QStyleHintReturn) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleHintReturn, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturn `
    ///
    /// ` param1: QStyleHintReturn `
    ///
    pub fn OperatorAssign(self: QStyleHintReturn, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturn;
        qtc.QStyleHintReturn_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHintReturn `
    ///
    pub fn Delete(self: QStyleHintReturn) void {
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

    /// New constructs a new QStyleHintReturnMask object.
    ///
    pub fn New() QStyleHintReturnMask {
        return .{ .ptr = qtc.QStyleHintReturnMask_new() };
    }

    /// New2 constructs a new QStyleHintReturnMask object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStyleHintReturnMask `
    ///
    pub fn New2(param1: anytype) QStyleHintReturnMask {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnMask;
        return .{ .ptr = qtc.QStyleHintReturnMask_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn Region(self: QStyleHintReturnMask) QRegion {
        return .{ .ptr = qtc.QStyleHintReturnMask_Region(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetRegion(self: QStyleHintReturnMask, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QStyleHintReturnMask_SetRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` param1: QStyleHintReturnMask `
    ///
    pub fn OperatorAssign(self: QStyleHintReturnMask, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnMask;
        qtc.QStyleHintReturnMask_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn Version(self: QStyleHintReturnMask) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleHintReturnMask, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn Type(self: QStyleHintReturnMask) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleHintReturnMask, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHintReturnMask `
    ///
    pub fn Delete(self: QStyleHintReturnMask) void {
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

    /// New constructs a new QStyleHintReturnVariant object.
    ///
    pub fn New() QStyleHintReturnVariant {
        return .{ .ptr = qtc.QStyleHintReturnVariant_new() };
    }

    /// New2 constructs a new QStyleHintReturnVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStyleHintReturnVariant `
    ///
    pub fn New2(param1: anytype) QStyleHintReturnVariant {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnVariant;
        return .{ .ptr = qtc.QStyleHintReturnVariant_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn Variant(self: QStyleHintReturnVariant) QVariant {
        return .{ .ptr = qtc.QStyleHintReturnVariant_Variant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SetVariant(self: QStyleHintReturnVariant, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QStyleHintReturnVariant_SetVariant(@ptrCast(self.ptr), @ptrCast(variant.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` param1: QStyleHintReturnVariant `
    ///
    pub fn OperatorAssign(self: QStyleHintReturnVariant, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStyleHintReturnVariant;
        qtc.QStyleHintReturnVariant_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn Version(self: QStyleHintReturnVariant) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QStyleHintReturnVariant, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn Type(self: QStyleHintReturnVariant) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: QStyleHintReturnVariant, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHintReturnVariant `
    ///
    pub fn Delete(self: QStyleHintReturnVariant) void {
        qtc.QStyleHintReturnVariant_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#public-types)
pub const enums = struct {
    pub const QStyleOption__OptionType = enum(i32) {
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

    pub const QStyleOption__StyleOptionType = enum(i32) {
        pub const Type: i32 = 0;
    };

    pub const QStyleOption__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFocusRect__StyleOptionType = enum(i32) {
        pub const Type: i32 = 1;
    };

    pub const QStyleOptionFocusRect__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFrame__StyleOptionType = enum(i32) {
        pub const Type: i32 = 5;
    };

    pub const QStyleOptionFrame__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFrame__FrameFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const Rounded: i32 = 2;
    };

    pub const QStyleOptionTabWidgetFrame__StyleOptionType = enum(i32) {
        pub const Type: i32 = 11;
    };

    pub const QStyleOptionTabWidgetFrame__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTabBarBase__StyleOptionType = enum(i32) {
        pub const Type: i32 = 12;
    };

    pub const QStyleOptionTabBarBase__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionHeader__StyleOptionType = enum(i32) {
        pub const Type: i32 = 8;
    };

    pub const QStyleOptionHeader__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionHeader__SectionPosition = enum(i32) {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneSection: i32 = 3;
    };

    pub const QStyleOptionHeader__SelectedPosition = enum(i32) {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
        pub const NextAndPreviousAreSelected: i32 = 3;
    };

    pub const QStyleOptionHeader__SortIndicator = enum(i32) {
        pub const None: i32 = 0;
        pub const SortUp: i32 = 1;
        pub const SortDown: i32 = 2;
    };

    pub const QStyleOptionHeaderV2__StyleOptionType = enum(i32) {
        pub const Type: i32 = 8;
    };

    pub const QStyleOptionHeaderV2__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 2;
    };

    pub const QStyleOptionButton__StyleOptionType = enum(i32) {
        pub const Type: i32 = 2;
    };

    pub const QStyleOptionButton__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionButton__ButtonFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const HasMenu: i32 = 2;
        pub const DefaultButton: i32 = 4;
        pub const AutoDefaultButton: i32 = 8;
        pub const CommandLinkButton: i32 = 16;
    };

    pub const QStyleOptionTab__StyleOptionType = enum(i32) {
        pub const Type: i32 = 3;
    };

    pub const QStyleOptionTab__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTab__TabPosition = enum(i32) {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
        pub const Moving: i32 = 4;
    };

    pub const QStyleOptionTab__SelectedPosition = enum(i32) {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
    };

    pub const QStyleOptionTab__CornerWidget = enum(i32) {
        pub const NoCornerWidgets: i32 = 0;
        pub const LeftCornerWidget: i32 = 1;
        pub const RightCornerWidget: i32 = 2;
    };

    pub const QStyleOptionTab__TabFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const HasFrame: i32 = 1;
    };

    pub const QStyleOptionToolBar__StyleOptionType = enum(i32) {
        pub const Type: i32 = 14;
    };

    pub const QStyleOptionToolBar__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolBar__ToolBarPosition = enum(i32) {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOne: i32 = 3;
    };

    pub const QStyleOptionToolBar__ToolBarFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const Movable: i32 = 1;
    };

    pub const QStyleOptionProgressBar__StyleOptionType = enum(i32) {
        pub const Type: i32 = 6;
    };

    pub const QStyleOptionProgressBar__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionMenuItem__StyleOptionType = enum(i32) {
        pub const Type: i32 = 4;
    };

    pub const QStyleOptionMenuItem__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionMenuItem__MenuItemType = enum(i32) {
        pub const Normal: i32 = 0;
        pub const DefaultItem: i32 = 1;
        pub const Separator: i32 = 2;
        pub const SubMenu: i32 = 3;
        pub const Scroller: i32 = 4;
        pub const TearOff: i32 = 5;
        pub const Margin: i32 = 6;
        pub const EmptyArea: i32 = 7;
    };

    pub const QStyleOptionMenuItem__CheckType = enum(i32) {
        pub const NotCheckable: i32 = 0;
        pub const Exclusive: i32 = 1;
        pub const NonExclusive: i32 = 2;
    };

    pub const QStyleOptionDockWidget__StyleOptionType = enum(i32) {
        pub const Type: i32 = 9;
    };

    pub const QStyleOptionDockWidget__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionViewItem__StyleOptionType = enum(i32) {
        pub const Type: i32 = 10;
    };

    pub const QStyleOptionViewItem__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionViewItem__Position = enum(i32) {
        pub const Left: i32 = 0;
        pub const Right: i32 = 1;
        pub const Top: i32 = 2;
        pub const Bottom: i32 = 3;
    };

    pub const QStyleOptionViewItem__ViewItemFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const WrapText: i32 = 1;
        pub const Alternate: i32 = 2;
        pub const HasCheckIndicator: i32 = 4;
        pub const HasDisplay: i32 = 8;
        pub const HasDecoration: i32 = 16;
    };

    pub const QStyleOptionViewItem__ViewItemPosition = enum(i32) {
        pub const Invalid: i32 = 0;
        pub const Beginning: i32 = 1;
        pub const Middle: i32 = 2;
        pub const End: i32 = 3;
        pub const OnlyOne: i32 = 4;
    };

    pub const QStyleOptionToolBox__StyleOptionType = enum(i32) {
        pub const Type: i32 = 7;
    };

    pub const QStyleOptionToolBox__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolBox__TabPosition = enum(i32) {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
    };

    pub const QStyleOptionToolBox__SelectedPosition = enum(i32) {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
    };

    pub const QStyleOptionRubberBand__StyleOptionType = enum(i32) {
        pub const Type: i32 = 13;
    };

    pub const QStyleOptionRubberBand__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionComplex__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983040;
    };

    pub const QStyleOptionComplex__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSlider__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983041;
    };

    pub const QStyleOptionSlider__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSpinBox__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983042;
    };

    pub const QStyleOptionSpinBox__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolButton__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983043;
    };

    pub const QStyleOptionToolButton__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolButton__ToolButtonFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const Arrow: i32 = 1;
        pub const Menu: i32 = 4;
        pub const MenuButtonPopup: i32 = 4;
        pub const PopupDelay: i32 = 8;
        pub const HasMenu: i32 = 16;
    };

    pub const QStyleOptionComboBox__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983044;
    };

    pub const QStyleOptionComboBox__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTitleBar__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983045;
    };

    pub const QStyleOptionTitleBar__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionGroupBox__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983046;
    };

    pub const QStyleOptionGroupBox__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSizeGrip__StyleOptionType = enum(i32) {
        pub const Type: i32 = 983047;
    };

    pub const QStyleOptionSizeGrip__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionGraphicsItem__StyleOptionType = enum(i32) {
        pub const Type: i32 = 15;
    };

    pub const QStyleOptionGraphicsItem__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturn__HintReturnType = enum(i32) {
        pub const SH_Default: i32 = 61440;
        pub const SH_Mask: i32 = 61441;
        pub const SH_Variant: i32 = 61442;
    };

    pub const QStyleHintReturn__StyleOptionType = enum(i32) {
        pub const Type: i32 = 61440;
    };

    pub const QStyleHintReturn__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturnMask__StyleOptionType = enum(i32) {
        pub const Type: i32 = 61441;
    };

    pub const QStyleHintReturnMask__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturnVariant__StyleOptionType = enum(i32) {
        pub const Type: i32 = 61442;
    };

    pub const QStyleHintReturnVariant__StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };
};
