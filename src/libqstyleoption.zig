const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
pub const qstyleoption = struct {
    /// New constructs a new QStyleOption object.
    ///
    pub fn New() QtC.QStyleOption {
        return qtc.QStyleOption_new();
    }

    /// New2 constructs a new QStyleOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOption `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOption {
        return qtc.QStyleOption_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStyleOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    pub fn New3(version: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new3(@bitCast(version));
    }

    /// New4 constructs a new QStyleOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new4(@bitCast(version), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOption `
    ///
    /// ` other: QtC.QStyleOption `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOption `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOption_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html)
pub const qstyleoptionfocusrect = struct {
    /// New constructs a new QStyleOptionFocusRect object.
    ///
    pub fn New() QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new();
    }

    /// New2 constructs a new QStyleOptionFocusRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionFocusRect `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QStyleOptionFocusRect_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` backgroundColor: QtC.QColor `
    ///
    pub fn SetBackgroundColor(self: ?*anyopaque, backgroundColor: QtC.QColor) void {
        qtc.QStyleOptionFocusRect_SetBackgroundColor(@ptrCast(self), @ptrCast(backgroundColor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` param1: QtC.QStyleOptionFocusRect `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionFocusRect_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionFocusRect `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFocusRect_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html)
pub const qstyleoptionframe = struct {
    /// New constructs a new QStyleOptionFrame object.
    ///
    pub fn New() QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new();
    }

    /// New2 constructs a new QStyleOptionFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionFrame `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_LineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionFrame_SetLineWidth(@ptrCast(self), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_MidLineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionFrame_SetMidLineWidth(@ptrCast(self), @bitCast(midLineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` features: flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionFrame_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_FrameShape(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QStyleOptionFrame_SetFrameShape(@ptrCast(self), @bitCast(frameShape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` param1: QtC.QStyleOptionFrame `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionFrame_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionFrame `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFrame_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html)
pub const qstyleoptiontabwidgetframe = struct {
    /// New constructs a new QStyleOptionTabWidgetFrame object.
    ///
    pub fn New() QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new();
    }

    /// New2 constructs a new QStyleOptionTabWidgetFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabWidgetFrame_LineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetLineWidth(@ptrCast(self), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabWidgetFrame_MidLineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetMidLineWidth(@ptrCast(self), @bitCast(midLineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ## Returns:
    ///
    /// ` qtabbar_enums.Shape `
    ///
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabWidgetFrame_Shape(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` shape: qtabbar_enums.Shape `
    ///
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetShape(@ptrCast(self), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn TabBarSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_TabBarSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` tabBarSize: QtC.QSize `
    ///
    pub fn SetTabBarSize(self: ?*anyopaque, tabBarSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetTabBarSize(@ptrCast(self), @ptrCast(tabBarSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn RightCornerWidgetSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_RightCornerWidgetSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` rightCornerWidgetSize: QtC.QSize `
    ///
    pub fn SetRightCornerWidgetSize(self: ?*anyopaque, rightCornerWidgetSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(@ptrCast(self), @ptrCast(rightCornerWidgetSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn LeftCornerWidgetSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` leftCornerWidgetSize: QtC.QSize `
    ///
    pub fn SetLeftCornerWidgetSize(self: ?*anyopaque, leftCornerWidgetSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(@ptrCast(self), @ptrCast(leftCornerWidgetSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn TabBarRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabWidgetFrame_TabBarRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` tabBarRect: QtC.QRect `
    ///
    pub fn SetTabBarRect(self: ?*anyopaque, tabBarRect: QtC.QRect) void {
        qtc.QStyleOptionTabWidgetFrame_SetTabBarRect(@ptrCast(self), @ptrCast(tabBarRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn SelectedTabRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabWidgetFrame_SelectedTabRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` selectedTabRect: QtC.QRect `
    ///
    pub fn SetSelectedTabRect(self: ?*anyopaque, selectedTabRect: QtC.QRect) void {
        qtc.QStyleOptionTabWidgetFrame_SetSelectedTabRect(@ptrCast(self), @ptrCast(selectedTabRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` param1: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionTabWidgetFrame_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionTabWidgetFrame `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabWidgetFrame_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html)
pub const qstyleoptiontabbarbase = struct {
    /// New constructs a new QStyleOptionTabBarBase object.
    ///
    pub fn New() QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new();
    }

    /// New2 constructs a new QStyleOptionTabBarBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionTabBarBase `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qtabbar_enums.Shape `
    ///
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabBarBase_Shape(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` shape: qtabbar_enums.Shape `
    ///
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTabBarBase_SetShape(@ptrCast(self), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn TabBarRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabBarBase_TabBarRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` tabBarRect: QtC.QRect `
    ///
    pub fn SetTabBarRect(self: ?*anyopaque, tabBarRect: QtC.QRect) void {
        qtc.QStyleOptionTabBarBase_SetTabBarRect(@ptrCast(self), @ptrCast(tabBarRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn SelectedTabRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabBarBase_SelectedTabRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` selectedTabRect: QtC.QRect `
    ///
    pub fn SetSelectedTabRect(self: ?*anyopaque, selectedTabRect: QtC.QRect) void {
        qtc.QStyleOptionTabBarBase_SetSelectedTabRect(@ptrCast(self), @ptrCast(selectedTabRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn DocumentMode(self: ?*anyopaque) bool {
        return qtc.QStyleOptionTabBarBase_DocumentMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` documentMode: bool `
    ///
    pub fn SetDocumentMode(self: ?*anyopaque, documentMode: bool) void {
        qtc.QStyleOptionTabBarBase_SetDocumentMode(@ptrCast(self), documentMode);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` param1: QtC.QStyleOptionTabBarBase `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionTabBarBase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionTabBarBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabBarBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html)
pub const qstyleoptionheader = struct {
    /// New constructs a new QStyleOptionHeader object.
    ///
    pub fn New() QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new();
    }

    /// New2 constructs a new QStyleOptionHeader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionHeader `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn Section(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` section: i32 `
    ///
    pub fn SetSection(self: ?*anyopaque, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self), @bitCast(section));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionheader.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionHeader_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn IconAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` iconAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetIconAlignment(self: ?*anyopaque, iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self), @bitCast(iconAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SectionPosition `
    ///
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` position: qstyleoption_enums.SectionPosition `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self), @bitCast(selectedPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SortIndicator `
    ///
    pub fn SortIndicator(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` sortIndicator: qstyleoption_enums.SortIndicator `
    ///
    pub fn SetSortIndicator(self: ?*anyopaque, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self), @bitCast(sortIndicator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` param1: QtC.QStyleOptionHeader `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionHeader_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionHeader `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeader_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html)
pub const qstyleoptionheaderv2 = struct {
    /// New constructs a new QStyleOptionHeaderV2 object.
    ///
    pub fn New() QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new();
    }

    /// New2 constructs a new QStyleOptionHeaderV2 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` param1: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionHeaderV2_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeaderV2_TextElideMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` textElideMode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: ?*anyopaque, textElideMode: i32) void {
        qtc.QStyleOptionHeaderV2_SetTextElideMode(@ptrCast(self), @bitCast(textElideMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn IsSectionDragTarget(self: ?*anyopaque) bool {
        return qtc.QStyleOptionHeaderV2_IsSectionDragTarget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` isSectionDragTarget: bool `
    ///
    pub fn SetIsSectionDragTarget(self: ?*anyopaque, isSectionDragTarget: bool) void {
        qtc.QStyleOptionHeaderV2_SetIsSectionDragTarget(@ptrCast(self), isSectionDragTarget);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Unused(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeaderV2_Unused(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` unused: i32 `
    ///
    pub fn SetUnused(self: ?*anyopaque, unused: i32) void {
        qtc.QStyleOptionHeaderV2_SetUnused(@ptrCast(self), @bitCast(unused));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Section(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` section: i32 `
    ///
    pub fn SetSection(self: ?*anyopaque, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self), @bitCast(section));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self));
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
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self), text_str);
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self), @bitCast(textAlignment));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionHeader_Icon(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn IconAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` iconAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetIconAlignment(self: ?*anyopaque, iconAlignment: i32) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self), @bitCast(iconAlignment));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SectionPosition `
    ///
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` position: qstyleoption_enums.SectionPosition `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self), @bitCast(position));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self), @bitCast(selectedPosition));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SortIndicator `
    ///
    pub fn SortIndicator(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` sortIndicator: qstyleoption_enums.SortIndicator `
    ///
    pub fn SetSortIndicator(self: ?*anyopaque, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self), @bitCast(sortIndicator));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionHeaderV2 `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeaderV2_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html)
pub const qstyleoptionbutton = struct {
    /// New constructs a new QStyleOptionButton object.
    ///
    pub fn New() QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new();
    }

    /// New2 constructs a new QStyleOptionButton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionButton `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ButtonFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionButton_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` features: flag of qstyleoption_enums.ButtonFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionButton_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionButton_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionbutton.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionButton_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionButton_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionButton_IconSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` iconSize: QtC.QSize `
    ///
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionButton_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` param1: QtC.QStyleOptionButton `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionButton_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionButton `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionButton_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html)
pub const qstyleoptiontab = struct {
    /// New constructs a new QStyleOptionTab object.
    ///
    pub fn New() QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new();
    }

    /// New2 constructs a new QStyleOptionTab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionTab `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qtabbar_enums.Shape `
    ///
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Shape(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` shape: qtabbar_enums.Shape `
    ///
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTab_SetShape(@ptrCast(self), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionTab_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontab.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionTab_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionTab_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionTab_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn Row(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Row(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` row: i32 `
    ///
    pub fn SetRow(self: ?*anyopaque, row: i32) void {
        qtc.QStyleOptionTab_SetRow(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.TabPosition `
    ///
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` position: qstyleoption_enums.TabPosition `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionTab_SetPosition(@ptrCast(self), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_SelectedPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionTab_SetSelectedPosition(@ptrCast(self), @bitCast(selectedPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.CornerWidget `
    ///
    pub fn CornerWidgets(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_CornerWidgets(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` cornerWidgets: flag of qstyleoption_enums.CornerWidget `
    ///
    pub fn SetCornerWidgets(self: ?*anyopaque, cornerWidgets: i32) void {
        qtc.QStyleOptionTab_SetCornerWidgets(@ptrCast(self), @bitCast(cornerWidgets));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTab_IconSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` iconSize: QtC.QSize `
    ///
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn DocumentMode(self: ?*anyopaque) bool {
        return qtc.QStyleOptionTab_DocumentMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` documentMode: bool `
    ///
    pub fn SetDocumentMode(self: ?*anyopaque, documentMode: bool) void {
        qtc.QStyleOptionTab_SetDocumentMode(@ptrCast(self), documentMode);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn LeftButtonSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTab_LeftButtonSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` leftButtonSize: QtC.QSize `
    ///
    pub fn SetLeftButtonSize(self: ?*anyopaque, leftButtonSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetLeftButtonSize(@ptrCast(self), @ptrCast(leftButtonSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn RightButtonSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTab_RightButtonSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` rightButtonSize: QtC.QSize `
    ///
    pub fn SetRightButtonSize(self: ?*anyopaque, rightButtonSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetRightButtonSize(@ptrCast(self), @ptrCast(rightButtonSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.TabFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` features: flag of qstyleoption_enums.TabFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionTab_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn TabIndex(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_TabIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` tabIndex: i32 `
    ///
    pub fn SetTabIndex(self: ?*anyopaque, tabIndex: i32) void {
        qtc.QStyleOptionTab_SetTabIndex(@ptrCast(self), @bitCast(tabIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` param1: QtC.QStyleOptionTab `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionTab_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionTab `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTab_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html)
pub const qstyleoptiontoolbar = struct {
    /// New constructs a new QStyleOptionToolBar object.
    ///
    pub fn New() QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new();
    }

    /// New2 constructs a new QStyleOptionToolBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionToolBar `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.ToolBarPosition `
    ///
    pub fn PositionOfLine(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_PositionOfLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` positionOfLine: qstyleoption_enums.ToolBarPosition `
    ///
    pub fn SetPositionOfLine(self: ?*anyopaque, positionOfLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionOfLine(@ptrCast(self), @bitCast(positionOfLine));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.ToolBarPosition `
    ///
    pub fn PositionWithinLine(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_PositionWithinLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` positionWithinLine: qstyleoption_enums.ToolBarPosition `
    ///
    pub fn SetPositionWithinLine(self: ?*anyopaque, positionWithinLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionWithinLine(@ptrCast(self), @bitCast(positionWithinLine));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolBarArea `
    ///
    pub fn ToolBarArea(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_ToolBarArea(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` toolBarArea: qnamespace_enums.ToolBarArea `
    ///
    pub fn SetToolBarArea(self: ?*anyopaque, toolBarArea: i32) void {
        qtc.QStyleOptionToolBar_SetToolBarArea(@ptrCast(self), @bitCast(toolBarArea));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ToolBarFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` features: flag of qstyleoption_enums.ToolBarFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionToolBar_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_LineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetLineWidth(@ptrCast(self), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_MidLineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetMidLineWidth(@ptrCast(self), @bitCast(midLineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` param1: QtC.QStyleOptionToolBar `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionToolBar_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionToolBar `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBar_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html)
pub const qstyleoptionprogressbar = struct {
    /// New constructs a new QStyleOptionProgressBar object.
    ///
    pub fn New() QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new();
    }

    /// New2 constructs a new QStyleOptionProgressBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionProgressBar `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Minimum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_Minimum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` minimum: i32 `
    ///
    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QStyleOptionProgressBar_SetMinimum(@ptrCast(self), @bitCast(minimum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Maximum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_Maximum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QStyleOptionProgressBar_SetMaximum(@ptrCast(self), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Progress(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_Progress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` progress: i32 `
    ///
    pub fn SetProgress(self: ?*anyopaque, progress: i32) void {
        qtc.QStyleOptionProgressBar_SetProgress(@ptrCast(self), @bitCast(progress));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionProgressBar_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionprogressbar.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionProgressBar_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionProgressBar_SetTextAlignment(@ptrCast(self), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn TextVisible(self: ?*anyopaque) bool {
        return qtc.QStyleOptionProgressBar_TextVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` textVisible: bool `
    ///
    pub fn SetTextVisible(self: ?*anyopaque, textVisible: bool) void {
        qtc.QStyleOptionProgressBar_SetTextVisible(@ptrCast(self), textVisible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn InvertedAppearance(self: ?*anyopaque) bool {
        return qtc.QStyleOptionProgressBar_InvertedAppearance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` invertedAppearance: bool `
    ///
    pub fn SetInvertedAppearance(self: ?*anyopaque, invertedAppearance: bool) void {
        qtc.QStyleOptionProgressBar_SetInvertedAppearance(@ptrCast(self), invertedAppearance);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn BottomToTop(self: ?*anyopaque) bool {
        return qtc.QStyleOptionProgressBar_BottomToTop(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` bottomToTop: bool `
    ///
    pub fn SetBottomToTop(self: ?*anyopaque, bottomToTop: bool) void {
        qtc.QStyleOptionProgressBar_SetBottomToTop(@ptrCast(self), bottomToTop);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` param1: QtC.QStyleOptionProgressBar `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionProgressBar_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionProgressBar `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionProgressBar_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html)
pub const qstyleoptionmenuitem = struct {
    /// New constructs a new QStyleOptionMenuItem object.
    ///
    pub fn New() QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new();
    }

    /// New2 constructs a new QStyleOptionMenuItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionMenuItem `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.MenuItemType `
    ///
    pub fn MenuItemType(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_MenuItemType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` menuItemType: qstyleoption_enums.MenuItemType `
    ///
    pub fn SetMenuItemType(self: ?*anyopaque, menuItemType: i32) void {
        qtc.QStyleOptionMenuItem_SetMenuItemType(@ptrCast(self), @bitCast(menuItemType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.CheckType `
    ///
    pub fn CheckType(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_CheckType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` checkType: qstyleoption_enums.CheckType `
    ///
    pub fn SetCheckType(self: ?*anyopaque, checkType: i32) void {
        qtc.QStyleOptionMenuItem_SetCheckType(@ptrCast(self), @bitCast(checkType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Checked(self: ?*anyopaque) bool {
        return qtc.QStyleOptionMenuItem_Checked(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QStyleOptionMenuItem_SetChecked(@ptrCast(self), checked);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn MenuHasCheckableItems(self: ?*anyopaque) bool {
        return qtc.QStyleOptionMenuItem_MenuHasCheckableItems(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` menuHasCheckableItems: bool `
    ///
    pub fn SetMenuHasCheckableItems(self: ?*anyopaque, menuHasCheckableItems: bool) void {
        qtc.QStyleOptionMenuItem_SetMenuHasCheckableItems(@ptrCast(self), menuHasCheckableItems);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn MenuRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionMenuItem_MenuRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` menuRect: QtC.QRect `
    ///
    pub fn SetMenuRect(self: ?*anyopaque, menuRect: QtC.QRect) void {
        qtc.QStyleOptionMenuItem_SetMenuRect(@ptrCast(self), @ptrCast(menuRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionMenuItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionmenuitem.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionMenuItem_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionMenuItem_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionMenuItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn MaxIconWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_MaxIconWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` maxIconWidth: i32 `
    ///
    pub fn SetMaxIconWidth(self: ?*anyopaque, maxIconWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetMaxIconWidth(@ptrCast(self), @bitCast(maxIconWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn ReservedShortcutWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_ReservedShortcutWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` reservedShortcutWidth: i32 `
    ///
    pub fn SetReservedShortcutWidth(self: ?*anyopaque, reservedShortcutWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetReservedShortcutWidth(@ptrCast(self), @bitCast(reservedShortcutWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStyleOptionMenuItem_Font(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionMenuItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` param1: QtC.QStyleOptionMenuItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionMenuItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionMenuItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionMenuItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html)
pub const qstyleoptiondockwidget = struct {
    /// New constructs a new QStyleOptionDockWidget object.
    ///
    pub fn New() QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new();
    }

    /// New2 constructs a new QStyleOptionDockWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionDockWidget `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var title_str = qtc.QStyleOptionDockWidget_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&title_str);
        const title_ret = allocator.alloc(u8, title_str.len) catch @panic("qstyleoptiondockwidget.Title: Memory allocation failed");
        @memcpy(title_ret, title_str.data[0..title_str.len]);
        return title_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QStyleOptionDockWidget_SetTitle(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Closable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_Closable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` closable: bool `
    ///
    pub fn SetClosable(self: ?*anyopaque, closable: bool) void {
        qtc.QStyleOptionDockWidget_SetClosable(@ptrCast(self), closable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Movable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_Movable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` movable: bool `
    ///
    pub fn SetMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QStyleOptionDockWidget_SetMovable(@ptrCast(self), movable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Floatable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_Floatable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` floatable: bool `
    ///
    pub fn SetFloatable(self: ?*anyopaque, floatable: bool) void {
        qtc.QStyleOptionDockWidget_SetFloatable(@ptrCast(self), floatable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn VerticalTitleBar(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_VerticalTitleBar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` verticalTitleBar: bool `
    ///
    pub fn SetVerticalTitleBar(self: ?*anyopaque, verticalTitleBar: bool) void {
        qtc.QStyleOptionDockWidget_SetVerticalTitleBar(@ptrCast(self), verticalTitleBar);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` param1: QtC.QStyleOptionDockWidget `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionDockWidget_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionDockWidget `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionDockWidget_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html)
pub const qstyleoptionviewitem = struct {
    /// New constructs a new QStyleOptionViewItem object.
    ///
    pub fn New() QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new();
    }

    /// New2 constructs a new QStyleOptionViewItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionViewItem `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn DisplayAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_DisplayAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` displayAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetDisplayAlignment(self: ?*anyopaque, displayAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDisplayAlignment(@ptrCast(self), @bitCast(displayAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn DecorationAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_DecorationAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` decorationAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetDecorationAlignment(self: ?*anyopaque, decorationAlignment: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationAlignment(@ptrCast(self), @bitCast(decorationAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_TextElideMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` textElideMode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: ?*anyopaque, textElideMode: i32) void {
        qtc.QStyleOptionViewItem_SetTextElideMode(@ptrCast(self), @bitCast(textElideMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.Position `
    ///
    pub fn DecorationPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_DecorationPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` decorationPosition: qstyleoption_enums.Position `
    ///
    pub fn SetDecorationPosition(self: ?*anyopaque, decorationPosition: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationPosition(@ptrCast(self), @bitCast(decorationPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn DecorationSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionViewItem_DecorationSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` decorationSize: QtC.QSize `
    ///
    pub fn SetDecorationSize(self: ?*anyopaque, decorationSize: QtC.QSize) void {
        qtc.QStyleOptionViewItem_SetDecorationSize(@ptrCast(self), @ptrCast(decorationSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStyleOptionViewItem_Font(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionViewItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn ShowDecorationSelected(self: ?*anyopaque) bool {
        return qtc.QStyleOptionViewItem_ShowDecorationSelected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` showDecorationSelected: bool `
    ///
    pub fn SetShowDecorationSelected(self: ?*anyopaque, showDecorationSelected: bool) void {
        qtc.QStyleOptionViewItem_SetShowDecorationSelected(@ptrCast(self), showDecorationSelected);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ViewItemFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` features: flag of qstyleoption_enums.ViewItemFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionViewItem_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QStyleOptionViewItem_Locale(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: QtC.QLocale) void {
        qtc.QStyleOptionViewItem_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QStyleOptionViewItem_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Index(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStyleOptionViewItem_Index(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetIndex(self: ?*anyopaque, index: QtC.QModelIndex) void {
        qtc.QStyleOptionViewItem_SetIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn CheckState(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_CheckState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` checkState: qnamespace_enums.CheckState `
    ///
    pub fn SetCheckState(self: ?*anyopaque, checkState: i32) void {
        qtc.QStyleOptionViewItem_SetCheckState(@ptrCast(self), @bitCast(checkState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionViewItem_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionViewItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionViewItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionviewitem.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionViewItem_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.ViewItemPosition `
    ///
    pub fn ViewItemPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_ViewItemPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` viewItemPosition: qstyleoption_enums.ViewItemPosition `
    ///
    pub fn SetViewItemPosition(self: ?*anyopaque, viewItemPosition: i32) void {
        qtc.QStyleOptionViewItem_SetViewItemPosition(@ptrCast(self), @bitCast(viewItemPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QStyleOptionViewItem_BackgroundBrush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` backgroundBrush: QtC.QBrush `
    ///
    pub fn SetBackgroundBrush(self: ?*anyopaque, backgroundBrush: QtC.QBrush) void {
        qtc.QStyleOptionViewItem_SetBackgroundBrush(@ptrCast(self), @ptrCast(backgroundBrush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` param1: QtC.QStyleOptionViewItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionViewItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html)
pub const qstyleoptiontoolbox = struct {
    /// New constructs a new QStyleOptionToolBox object.
    ///
    pub fn New() QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new();
    }

    /// New2 constructs a new QStyleOptionToolBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionToolBox `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionToolBox_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbox.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionToolBox_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionToolBox_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionToolBox_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.TabPosition `
    ///
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBox_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` position: qstyleoption_enums.TabPosition `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionToolBox_SetPosition(@ptrCast(self), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.SelectedPosition `
    ///
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBox_SelectedPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` selectedPosition: qstyleoption_enums.SelectedPosition `
    ///
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionToolBox_SetSelectedPosition(@ptrCast(self), @bitCast(selectedPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` param1: QtC.QStyleOptionToolBox `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionToolBox_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionToolBox `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBox_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html)
pub const qstyleoptionrubberband = struct {
    /// New constructs a new QStyleOptionRubberBand object.
    ///
    pub fn New() QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new();
    }

    /// New2 constructs a new QStyleOptionRubberBand object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionRubberBand `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ## Returns:
    ///
    /// ` qrubberband_enums.Shape `
    ///
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionRubberBand_Shape(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` shape: qrubberband_enums.Shape `
    ///
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionRubberBand_SetShape(@ptrCast(self), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn Opaque(self: ?*anyopaque) bool {
        return qtc.QStyleOptionRubberBand_Opaque(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` opaque: bool `
    ///
    pub fn SetOpaque(self: ?*anyopaque, _opaque: bool) void {
        qtc.QStyleOptionRubberBand_SetOpaque(@ptrCast(self), _opaque);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` param1: QtC.QStyleOptionRubberBand `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionRubberBand_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionRubberBand `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionRubberBand_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html)
pub const qstyleoptioncomplex = struct {
    /// New constructs a new QStyleOptionComplex object.
    ///
    pub fn New() QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new();
    }

    /// New2 constructs a new QStyleOptionComplex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionComplex `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStyleOptionComplex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    pub fn New3(version: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new3(@bitCast(version));
    }

    /// New4 constructs a new QStyleOptionComplex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new4(@bitCast(version), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` param1: QtC.QStyleOptionComplex `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionComplex_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionComplex `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComplex_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html)
pub const qstyleoptionslider = struct {
    /// New constructs a new QStyleOptionSlider object.
    ///
    pub fn New() QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new();
    }

    /// New2 constructs a new QStyleOptionSlider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionSlider `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionSlider_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn Minimum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_Minimum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` minimum: i32 `
    ///
    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QStyleOptionSlider_SetMinimum(@ptrCast(self), @bitCast(minimum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn Maximum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_Maximum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QStyleOptionSlider_SetMaximum(@ptrCast(self), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` qslider_enums.TickPosition `
    ///
    pub fn TickPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_TickPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` tickPosition: qslider_enums.TickPosition `
    ///
    pub fn SetTickPosition(self: ?*anyopaque, tickPosition: i32) void {
        qtc.QStyleOptionSlider_SetTickPosition(@ptrCast(self), @bitCast(tickPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn TickInterval(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_TickInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` tickInterval: i32 `
    ///
    pub fn SetTickInterval(self: ?*anyopaque, tickInterval: i32) void {
        qtc.QStyleOptionSlider_SetTickInterval(@ptrCast(self), @bitCast(tickInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn UpsideDown(self: ?*anyopaque) bool {
        return qtc.QStyleOptionSlider_UpsideDown(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn SetUpsideDown(self: ?*anyopaque, upsideDown: bool) void {
        qtc.QStyleOptionSlider_SetUpsideDown(@ptrCast(self), upsideDown);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn SliderPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_SliderPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` sliderPosition: i32 `
    ///
    pub fn SetSliderPosition(self: ?*anyopaque, sliderPosition: i32) void {
        qtc.QStyleOptionSlider_SetSliderPosition(@ptrCast(self), @bitCast(sliderPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn SliderValue(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_SliderValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` sliderValue: i32 `
    ///
    pub fn SetSliderValue(self: ?*anyopaque, sliderValue: i32) void {
        qtc.QStyleOptionSlider_SetSliderValue(@ptrCast(self), @bitCast(sliderValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn SingleStep(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_SingleStep(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` singleStep: i32 `
    ///
    pub fn SetSingleStep(self: ?*anyopaque, singleStep: i32) void {
        qtc.QStyleOptionSlider_SetSingleStep(@ptrCast(self), @bitCast(singleStep));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn PageStep(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_PageStep(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` pageStep: i32 `
    ///
    pub fn SetPageStep(self: ?*anyopaque, pageStep: i32) void {
        qtc.QStyleOptionSlider_SetPageStep(@ptrCast(self), @bitCast(pageStep));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn NotchTarget(self: ?*anyopaque) f64 {
        return qtc.QStyleOptionSlider_NotchTarget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` notchTarget: f64 `
    ///
    pub fn SetNotchTarget(self: ?*anyopaque, notchTarget: f64) void {
        qtc.QStyleOptionSlider_SetNotchTarget(@ptrCast(self), @bitCast(notchTarget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn DialWrapping(self: ?*anyopaque) bool {
        return qtc.QStyleOptionSlider_DialWrapping(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` dialWrapping: bool `
    ///
    pub fn SetDialWrapping(self: ?*anyopaque, dialWrapping: bool) void {
        qtc.QStyleOptionSlider_SetDialWrapping(@ptrCast(self), dialWrapping);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_KeyboardModifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` keyboardModifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetKeyboardModifiers(self: ?*anyopaque, keyboardModifiers: i32) void {
        qtc.QStyleOptionSlider_SetKeyboardModifiers(@ptrCast(self), @bitCast(keyboardModifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` param1: QtC.QStyleOptionSlider `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionSlider_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionSlider `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSlider_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html)
pub const qstyleoptionspinbox = struct {
    /// New constructs a new QStyleOptionSpinBox object.
    ///
    pub fn New() QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new();
    }

    /// New2 constructs a new QStyleOptionSpinBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionSpinBox `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSpinBox_ButtonSymbols(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` buttonSymbols: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: ?*anyopaque, buttonSymbols: i32) void {
        qtc.QStyleOptionSpinBox_SetButtonSymbols(@ptrCast(self), @bitCast(buttonSymbols));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSpinBox_StepEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` stepEnabled: flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SetStepEnabled(self: ?*anyopaque, stepEnabled: i32) void {
        qtc.QStyleOptionSpinBox_SetStepEnabled(@ptrCast(self), @bitCast(stepEnabled));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn Frame(self: ?*anyopaque) bool {
        return qtc.QStyleOptionSpinBox_Frame(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QStyleOptionSpinBox_SetFrame(@ptrCast(self), frame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` param1: QtC.QStyleOptionSpinBox `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionSpinBox_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionSpinBox `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSpinBox_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html)
pub const qstyleoptiontoolbutton = struct {
    /// New constructs a new QStyleOptionToolButton object.
    ///
    pub fn New() QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new();
    }

    /// New2 constructs a new QStyleOptionToolButton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionToolButton `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.ToolButtonFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolButton_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` features: flag of qstyleoption_enums.ToolButtonFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionToolButton_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionToolButton_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionToolButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionToolButton_IconSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` iconSize: QtC.QSize `
    ///
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionToolButton_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionToolButton_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbutton.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionToolButton_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ArrowType `
    ///
    pub fn ArrowType(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolButton_ArrowType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` arrowType: qnamespace_enums.ArrowType `
    ///
    pub fn SetArrowType(self: ?*anyopaque, arrowType: i32) void {
        qtc.QStyleOptionToolButton_SetArrowType(@ptrCast(self), @bitCast(arrowType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolButtonStyle `
    ///
    pub fn ToolButtonStyle(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolButton_ToolButtonStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QStyleOptionToolButton_SetToolButtonStyle(@ptrCast(self), @bitCast(toolButtonStyle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QStyleOptionToolButton_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: QtC.QPoint) void {
        qtc.QStyleOptionToolButton_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStyleOptionToolButton_Font(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionToolButton_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` param1: QtC.QStyleOptionToolButton `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionToolButton_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionToolButton `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolButton_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html)
pub const qstyleoptioncombobox = struct {
    /// New constructs a new QStyleOptionComboBox object.
    ///
    pub fn New() QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new();
    }

    /// New2 constructs a new QStyleOptionComboBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionComboBox `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn Editable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionComboBox_Editable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QStyleOptionComboBox_SetEditable(@ptrCast(self), editable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn PopupRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionComboBox_PopupRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` popupRect: QtC.QRect `
    ///
    pub fn SetPopupRect(self: ?*anyopaque, popupRect: QtC.QRect) void {
        qtc.QStyleOptionComboBox_SetPopupRect(@ptrCast(self), @ptrCast(popupRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn Frame(self: ?*anyopaque) bool {
        return qtc.QStyleOptionComboBox_Frame(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QStyleOptionComboBox_SetFrame(@ptrCast(self), frame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var currentText_str = qtc.QStyleOptionComboBox_CurrentText(@ptrCast(self));
        defer qtc.libqt_string_free(&currentText_str);
        const currentText_ret = allocator.alloc(u8, currentText_str.len) catch @panic("qstyleoptioncombobox.CurrentText: Memory allocation failed");
        @memcpy(currentText_ret, currentText_str.data[0..currentText_str.len]);
        return currentText_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` currentText: []const u8 `
    ///
    pub fn SetCurrentText(self: ?*anyopaque, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
            .len = currentText.len,
            .data = currentText.ptr,
        };
        qtc.QStyleOptionComboBox_SetCurrentText(@ptrCast(self), currentText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn CurrentIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionComboBox_CurrentIcon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` currentIcon: QtC.QIcon `
    ///
    pub fn SetCurrentIcon(self: ?*anyopaque, currentIcon: QtC.QIcon) void {
        qtc.QStyleOptionComboBox_SetCurrentIcon(@ptrCast(self), @ptrCast(currentIcon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionComboBox_IconSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` iconSize: QtC.QSize `
    ///
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionComboBox_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComboBox_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionComboBox_SetTextAlignment(@ptrCast(self), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` param1: QtC.QStyleOptionComboBox `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionComboBox_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionComboBox `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComboBox_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html)
pub const qstyleoptiontitlebar = struct {
    /// New constructs a new QStyleOptionTitleBar object.
    ///
    pub fn New() QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new();
    }

    /// New2 constructs a new QStyleOptionTitleBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionTitleBar `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionTitleBar_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontitlebar.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionTitleBar_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionTitleBar_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionTitleBar_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn TitleBarState(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` titleBarState: i32 `
    ///
    pub fn SetTitleBarState(self: ?*anyopaque, titleBarState: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarState(@ptrCast(self), @bitCast(titleBarState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn TitleBarFlags(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` titleBarFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetTitleBarFlags(self: ?*anyopaque, titleBarFlags: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarFlags(@ptrCast(self), @bitCast(titleBarFlags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` param1: QtC.QStyleOptionTitleBar `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionTitleBar_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionTitleBar `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTitleBar_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html)
pub const qstyleoptiongroupbox = struct {
    /// New constructs a new QStyleOptionGroupBox object.
    ///
    pub fn New() QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new();
    }

    /// New2 constructs a new QStyleOptionGroupBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionGroupBox `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionGroupBox_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` features: flag of qstyleoption_enums.FrameFeature `
    ///
    pub fn SetFeatures(self: ?*anyopaque, features: i32) void {
        qtc.QStyleOptionGroupBox_SetFeatures(@ptrCast(self), @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var text_str = qtc.QStyleOptionGroupBox_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiongroupbox.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionGroupBox_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionGroupBox_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStyleOptionGroupBox_SetTextAlignment(@ptrCast(self), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn TextColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QStyleOptionGroupBox_TextColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` textColor: QtC.QColor `
    ///
    pub fn SetTextColor(self: ?*anyopaque, textColor: QtC.QColor) void {
        qtc.QStyleOptionGroupBox_SetTextColor(@ptrCast(self), @ptrCast(textColor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionGroupBox_LineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetLineWidth(@ptrCast(self), @bitCast(lineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionGroupBox_MidLineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetMidLineWidth(@ptrCast(self), @bitCast(midLineWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` param1: QtC.QStyleOptionGroupBox `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionGroupBox_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionGroupBox `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGroupBox_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html)
pub const qstyleoptionsizegrip = struct {
    /// New constructs a new QStyleOptionSizeGrip object.
    ///
    pub fn New() QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new();
    }

    /// New2 constructs a new QStyleOptionSizeGrip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionSizeGrip `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Corner `
    ///
    pub fn Corner(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSizeGrip_Corner(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` corner: qnamespace_enums.Corner `
    ///
    pub fn SetCorner(self: ?*anyopaque, corner: i32) void {
        qtc.QStyleOptionSizeGrip_SetCorner(@ptrCast(self), @bitCast(corner));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` param1: QtC.QStyleOptionSizeGrip `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionSizeGrip_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn SubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` subControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetSubControls(self: ?*anyopaque, subControls: i32) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @bitCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.SubControl `
    ///
    pub fn ActiveSubControls(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` activeSubControls: flag of qstyle_enums.SubControl `
    ///
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i32) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @bitCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionSizeGrip `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSizeGrip_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html)
pub const qstyleoptiongraphicsitem = struct {
    /// New constructs a new QStyleOptionGraphicsItem object.
    ///
    pub fn New() QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new();
    }

    /// New2 constructs a new QStyleOptionGraphicsItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn ExposedRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QStyleOptionGraphicsItem_ExposedRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` exposedRect: QtC.QRectF `
    ///
    pub fn SetExposedRect(self: ?*anyopaque, exposedRect: QtC.QRectF) void {
        qtc.QStyleOptionGraphicsItem_SetExposedRect(@ptrCast(self), @ptrCast(exposedRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` param1: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleOptionGraphicsItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` worldTransform: QtC.QTransform `
    ///
    pub fn LevelOfDetailFromTransform(worldTransform: ?*anyopaque) f64 {
        return qtc.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(@ptrCast(worldTransform));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` fontMetrics: QtC.QFontMetrics `
    ///
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` styleObject: QtC.QObject `
    ///
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleOptionGraphicsItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGraphicsItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html)
pub const qstylehintreturn = struct {
    /// New constructs a new QStyleHintReturn object.
    ///
    pub fn New() QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new();
    }

    /// New2 constructs a new QStyleHintReturn object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QStyleHintReturn `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QStyleHintReturn object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    pub fn New3(version: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new3(@bitCast(version));
    }

    /// New4 constructs a new QStyleHintReturn object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new4(@bitCast(version), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturn `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturn `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturn `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturn `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturn `
    ///
    /// ` param1: QtC.QStyleHintReturn `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturn_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleHintReturn `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturn_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html)
pub const qstylehintreturnmask = struct {
    /// New constructs a new QStyleHintReturnMask object.
    ///
    pub fn New() QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new();
    }

    /// New2 constructs a new QStyleHintReturnMask object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QStyleHintReturnMask `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    pub fn Region(self: ?*anyopaque) QtC.QRegion {
        return qtc.QStyleHintReturnMask_Region(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    /// ` region: QtC.QRegion `
    ///
    pub fn SetRegion(self: ?*anyopaque, region: QtC.QRegion) void {
        qtc.QStyleHintReturnMask_SetRegion(@ptrCast(self), @ptrCast(region));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    /// ` param1: QtC.QStyleHintReturnMask `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleHintReturnMask `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html)
pub const qstylehintreturnvariant = struct {
    /// New constructs a new QStyleHintReturnVariant object.
    ///
    pub fn New() QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new();
    }

    /// New2 constructs a new QStyleHintReturnVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QStyleHintReturnVariant `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    pub fn Variant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QStyleHintReturnVariant_Variant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SetVariant(self: ?*anyopaque, variant: QtC.QVariant) void {
        qtc.QStyleHintReturnVariant_SetVariant(@ptrCast(self), @ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    /// ` param1: QtC.QStyleHintReturnVariant `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStyleHintReturnVariant `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_Delete(@ptrCast(self));
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
