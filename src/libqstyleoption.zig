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

/// https://doc.qt.io/qt-6/qstyleoption.html
pub const qstyleoption = struct {
    /// New constructs a new QStyleOption object.
    ///
    ///
    pub fn New() QtC.QStyleOption {
        return qtc.QStyleOption_new();
    }

    /// New2 constructs a new QStyleOption object.
    ///
    /// ``` other: QtC.QStyleOption ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOption {
        return qtc.QStyleOption_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStyleOption object.
    ///
    /// ``` version: i32 ```
    pub fn New3(version: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new3(@intCast(version));
    }

    /// New4 constructs a new QStyleOption object.
    ///
    /// ``` version: i32, typeVal: i32 ```
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new4(@intCast(version), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOption, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOption, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOption, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOption, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOption, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOption, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOption, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOption, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOption, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOption, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOption_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html
pub const qstyleoptionfocusrect = struct {
    /// New constructs a new QStyleOptionFocusRect object.
    ///
    ///
    pub fn New() QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new();
    }

    /// New2 constructs a new QStyleOptionFocusRect object.
    ///
    /// ``` other: QtC.QStyleOptionFocusRect ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QStyleOptionFocusRect_BackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, backgroundColor: QtC.QColor ```
    pub fn SetBackgroundColor(self: ?*anyopaque, backgroundColor: QtC.QColor) void {
        qtc.QStyleOptionFocusRect_SetBackgroundColor(@ptrCast(self), @ptrCast(backgroundColor));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFocusRect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionframe.html
pub const qstyleoptionframe = struct {
    /// New constructs a new QStyleOptionFrame object.
    ///
    ///
    pub fn New() QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new();
    }

    /// New2 constructs a new QStyleOptionFrame object.
    ///
    /// ``` other: QtC.QStyleOptionFrame ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_LineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_MidLineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.FrameFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionFrame_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, features: flag of qstyleoption_enums.FrameFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionFrame_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionFrame_FrameShape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QStyleOptionFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionFrame, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionFrame, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionFrame, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html
pub const qstyleoptiontabwidgetframe = struct {
    /// New constructs a new QStyleOptionTabWidgetFrame object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new();
    }

    /// New2 constructs a new QStyleOptionTabWidgetFrame object.
    ///
    /// ``` other: QtC.QStyleOptionTabWidgetFrame ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabWidgetFrame_LineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabWidgetFrame_MidLineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    ///
    /// Returns: ``` qtabbar_enums.Shape ```
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabWidgetFrame_Shape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, shape: qtabbar_enums.Shape ```
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTabWidgetFrame_SetShape(@ptrCast(self), @intCast(shape));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn TabBarSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_TabBarSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, tabBarSize: QtC.QSize ```
    pub fn SetTabBarSize(self: ?*anyopaque, tabBarSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetTabBarSize(@ptrCast(self), @ptrCast(tabBarSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn RightCornerWidgetSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_RightCornerWidgetSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, rightCornerWidgetSize: QtC.QSize ```
    pub fn SetRightCornerWidgetSize(self: ?*anyopaque, rightCornerWidgetSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(@ptrCast(self), @ptrCast(rightCornerWidgetSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn LeftCornerWidgetSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, leftCornerWidgetSize: QtC.QSize ```
    pub fn SetLeftCornerWidgetSize(self: ?*anyopaque, leftCornerWidgetSize: QtC.QSize) void {
        qtc.QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(@ptrCast(self), @ptrCast(leftCornerWidgetSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn TabBarRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabWidgetFrame_TabBarRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, tabBarRect: QtC.QRect ```
    pub fn SetTabBarRect(self: ?*anyopaque, tabBarRect: QtC.QRect) void {
        qtc.QStyleOptionTabWidgetFrame_SetTabBarRect(@ptrCast(self), @ptrCast(tabBarRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn SelectedTabRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabWidgetFrame_SelectedTabRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, selectedTabRect: QtC.QRect ```
    pub fn SetSelectedTabRect(self: ?*anyopaque, selectedTabRect: QtC.QRect) void {
        qtc.QStyleOptionTabWidgetFrame_SetSelectedTabRect(@ptrCast(self), @ptrCast(selectedTabRect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabWidgetFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html
pub const qstyleoptiontabbarbase = struct {
    /// New constructs a new QStyleOptionTabBarBase object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new();
    }

    /// New2 constructs a new QStyleOptionTabBarBase object.
    ///
    /// ``` other: QtC.QStyleOptionTabBarBase ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    ///
    /// Returns: ``` qtabbar_enums.Shape ```
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTabBarBase_Shape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, shape: qtabbar_enums.Shape ```
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTabBarBase_SetShape(@ptrCast(self), @intCast(shape));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn TabBarRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabBarBase_TabBarRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, tabBarRect: QtC.QRect ```
    pub fn SetTabBarRect(self: ?*anyopaque, tabBarRect: QtC.QRect) void {
        qtc.QStyleOptionTabBarBase_SetTabBarRect(@ptrCast(self), @ptrCast(tabBarRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn SelectedTabRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionTabBarBase_SelectedTabRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, selectedTabRect: QtC.QRect ```
    pub fn SetSelectedTabRect(self: ?*anyopaque, selectedTabRect: QtC.QRect) void {
        qtc.QStyleOptionTabBarBase_SetSelectedTabRect(@ptrCast(self), @ptrCast(selectedTabRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn DocumentMode(self: ?*anyopaque) bool {
        return qtc.QStyleOptionTabBarBase_DocumentMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, documentMode: bool ```
    pub fn SetDocumentMode(self: ?*anyopaque, documentMode: bool) void {
        qtc.QStyleOptionTabBarBase_SetDocumentMode(@ptrCast(self), documentMode);
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabBarBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionheader.html
pub const qstyleoptionheader = struct {
    /// New constructs a new QStyleOptionHeader object.
    ///
    ///
    pub fn New() QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new();
    }

    /// New2 constructs a new QStyleOptionHeader object.
    ///
    /// ``` other: QtC.QStyleOptionHeader ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn Section(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, section: i32 ```
    pub fn SetSection(self: ?*anyopaque, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self), @intCast(section));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionheader.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn TextAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, textAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i64) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionHeader_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn IconAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, iconAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetIconAlignment(self: ?*anyopaque, iconAlignment: i64) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self), @intCast(iconAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` qstyleoption_enums.SectionPosition ```
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, position: qstyleoption_enums.SectionPosition ```
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` qstyleoption_enums.SelectedPosition ```
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, selectedPosition: qstyleoption_enums.SelectedPosition ```
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` qstyleoption_enums.SortIndicator ```
    pub fn SortIndicator(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, sortIndicator: qstyleoption_enums.SortIndicator ```
    pub fn SetSortIndicator(self: ?*anyopaque, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self), @intCast(sortIndicator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionHeader, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionHeader, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionHeader, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html
pub const qstyleoptionheaderv2 = struct {
    /// New constructs a new QStyleOptionHeaderV2 object.
    ///
    ///
    pub fn New() QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new();
    }

    /// New2 constructs a new QStyleOptionHeaderV2 object.
    ///
    /// ``` other: QtC.QStyleOptionHeaderV2 ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` qnamespace_enums.TextElideMode ```
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeaderV2_TextElideMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, textElideMode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, textElideMode: i32) void {
        qtc.QStyleOptionHeaderV2_SetTextElideMode(@ptrCast(self), @intCast(textElideMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn IsSectionDragTarget(self: ?*anyopaque) bool {
        return qtc.QStyleOptionHeaderV2_IsSectionDragTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, isSectionDragTarget: bool ```
    pub fn SetIsSectionDragTarget(self: ?*anyopaque, isSectionDragTarget: bool) void {
        qtc.QStyleOptionHeaderV2_SetIsSectionDragTarget(@ptrCast(self), isSectionDragTarget);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Unused(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeaderV2_Unused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, unused: i32 ```
    pub fn SetUnused(self: ?*anyopaque, unused: i32) void {
        qtc.QStyleOptionHeaderV2_SetUnused(@ptrCast(self), @intCast(unused));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Section(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Section(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, section: i32 ```
    pub fn SetSection(self: ?*anyopaque, section: i32) void {
        qtc.QStyleOptionHeader_SetSection(@ptrCast(self), @intCast(section));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionHeader_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionheaderv2.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionHeader_SetText(@ptrCast(self), text_str);
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn TextAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionHeader_TextAlignment(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, textAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i64) void {
        qtc.QStyleOptionHeader_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionHeader_Icon(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionHeader_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn IconAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionHeader_IconAlignment(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, iconAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetIconAlignment(self: ?*anyopaque, iconAlignment: i64) void {
        qtc.QStyleOptionHeader_SetIconAlignment(@ptrCast(self), @intCast(iconAlignment));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` qstyleoption_enums.SectionPosition ```
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Position(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, position: qstyleoption_enums.SectionPosition ```
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionHeader_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` qstyleoption_enums.SelectedPosition ```
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SelectedPosition(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, selectedPosition: qstyleoption_enums.SelectedPosition ```
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionHeader_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` qstyleoption_enums.SortIndicator ```
    pub fn SortIndicator(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_SortIndicator(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, sortIndicator: qstyleoption_enums.SortIndicator ```
    pub fn SetSortIndicator(self: ?*anyopaque, sortIndicator: i32) void {
        qtc.QStyleOptionHeader_SetSortIndicator(@ptrCast(self), @intCast(sortIndicator));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionHeader_Orientation(@ptrCast(self));
    }

    /// Inherited from QStyleOptionHeader
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionHeader_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeaderV2_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html
pub const qstyleoptionbutton = struct {
    /// New constructs a new QStyleOptionButton object.
    ///
    ///
    pub fn New() QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new();
    }

    /// New2 constructs a new QStyleOptionButton object.
    ///
    /// ``` other: QtC.QStyleOptionButton ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.ButtonFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionButton_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, features: flag of qstyleoption_enums.ButtonFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionButton_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionButton_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionbutton.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionButton_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionButton_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionButton_IconSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, iconSize: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionButton_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionButton, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionButton, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionButton, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontab.html
pub const qstyleoptiontab = struct {
    /// New constructs a new QStyleOptionTab object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new();
    }

    /// New2 constructs a new QStyleOptionTab object.
    ///
    /// ``` other: QtC.QStyleOptionTab ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` qtabbar_enums.Shape ```
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Shape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, shape: qtabbar_enums.Shape ```
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionTab_SetShape(@ptrCast(self), @intCast(shape));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionTab_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontab.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionTab_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionTab_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionTab_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn Row(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Row(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, row: i32 ```
    pub fn SetRow(self: ?*anyopaque, row: i32) void {
        qtc.QStyleOptionTab_SetRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` qstyleoption_enums.TabPosition ```
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, position: qstyleoption_enums.TabPosition ```
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionTab_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` qstyleoption_enums.SelectedPosition ```
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_SelectedPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, selectedPosition: qstyleoption_enums.SelectedPosition ```
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionTab_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.CornerWidget ```
    pub fn CornerWidgets(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionTab_CornerWidgets(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, cornerWidgets: flag of qstyleoption_enums.CornerWidget ```
    pub fn SetCornerWidgets(self: ?*anyopaque, cornerWidgets: i64) void {
        qtc.QStyleOptionTab_SetCornerWidgets(@ptrCast(self), @intCast(cornerWidgets));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTab_IconSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, iconSize: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn DocumentMode(self: ?*anyopaque) bool {
        return qtc.QStyleOptionTab_DocumentMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, documentMode: bool ```
    pub fn SetDocumentMode(self: ?*anyopaque, documentMode: bool) void {
        qtc.QStyleOptionTab_SetDocumentMode(@ptrCast(self), documentMode);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn LeftButtonSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTab_LeftButtonSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, leftButtonSize: QtC.QSize ```
    pub fn SetLeftButtonSize(self: ?*anyopaque, leftButtonSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetLeftButtonSize(@ptrCast(self), @ptrCast(leftButtonSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn RightButtonSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionTab_RightButtonSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, rightButtonSize: QtC.QSize ```
    pub fn SetRightButtonSize(self: ?*anyopaque, rightButtonSize: QtC.QSize) void {
        qtc.QStyleOptionTab_SetRightButtonSize(@ptrCast(self), @ptrCast(rightButtonSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.TabFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionTab_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, features: flag of qstyleoption_enums.TabFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionTab_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn TabIndex(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTab_TabIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, tabIndex: i32 ```
    pub fn SetTabIndex(self: ?*anyopaque, tabIndex: i32) void {
        qtc.QStyleOptionTab_SetTabIndex(@ptrCast(self), @intCast(tabIndex));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTab, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTab, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionTab, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTab_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html
pub const qstyleoptiontoolbar = struct {
    /// New constructs a new QStyleOptionToolBar object.
    ///
    ///
    pub fn New() QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new();
    }

    /// New2 constructs a new QStyleOptionToolBar object.
    ///
    /// ``` other: QtC.QStyleOptionToolBar ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    ///
    /// Returns: ``` qstyleoption_enums.ToolBarPosition ```
    pub fn PositionOfLine(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_PositionOfLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, positionOfLine: qstyleoption_enums.ToolBarPosition ```
    pub fn SetPositionOfLine(self: ?*anyopaque, positionOfLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionOfLine(@ptrCast(self), @intCast(positionOfLine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    ///
    /// Returns: ``` qstyleoption_enums.ToolBarPosition ```
    pub fn PositionWithinLine(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_PositionWithinLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, positionWithinLine: qstyleoption_enums.ToolBarPosition ```
    pub fn SetPositionWithinLine(self: ?*anyopaque, positionWithinLine: i32) void {
        qtc.QStyleOptionToolBar_SetPositionWithinLine(@ptrCast(self), @intCast(positionWithinLine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    ///
    /// Returns: ``` qnamespace_enums.ToolBarArea ```
    pub fn ToolBarArea(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_ToolBarArea(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, toolBarArea: qnamespace_enums.ToolBarArea ```
    pub fn SetToolBarArea(self: ?*anyopaque, toolBarArea: i32) void {
        qtc.QStyleOptionToolBar_SetToolBarArea(@ptrCast(self), @intCast(toolBarArea));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.ToolBarFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionToolBar_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, features: flag of qstyleoption_enums.ToolBarFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionToolBar_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_LineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBar_MidLineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionToolBar_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html
pub const qstyleoptionprogressbar = struct {
    /// New constructs a new QStyleOptionProgressBar object.
    ///
    ///
    pub fn New() QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new();
    }

    /// New2 constructs a new QStyleOptionProgressBar object.
    ///
    /// ``` other: QtC.QStyleOptionProgressBar ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Minimum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_Minimum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, minimum: i32 ```
    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QStyleOptionProgressBar_SetMinimum(@ptrCast(self), @intCast(minimum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Maximum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_Maximum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, maximum: i32 ```
    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QStyleOptionProgressBar_SetMaximum(@ptrCast(self), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Progress(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionProgressBar_Progress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, progress: i32 ```
    pub fn SetProgress(self: ?*anyopaque, progress: i32) void {
        qtc.QStyleOptionProgressBar_SetProgress(@ptrCast(self), @intCast(progress));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionProgressBar_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionprogressbar.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionProgressBar_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn TextAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionProgressBar_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, textAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i64) void {
        qtc.QStyleOptionProgressBar_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn TextVisible(self: ?*anyopaque) bool {
        return qtc.QStyleOptionProgressBar_TextVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, textVisible: bool ```
    pub fn SetTextVisible(self: ?*anyopaque, textVisible: bool) void {
        qtc.QStyleOptionProgressBar_SetTextVisible(@ptrCast(self), textVisible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn InvertedAppearance(self: ?*anyopaque) bool {
        return qtc.QStyleOptionProgressBar_InvertedAppearance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, invertedAppearance: bool ```
    pub fn SetInvertedAppearance(self: ?*anyopaque, invertedAppearance: bool) void {
        qtc.QStyleOptionProgressBar_SetInvertedAppearance(@ptrCast(self), invertedAppearance);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn BottomToTop(self: ?*anyopaque) bool {
        return qtc.QStyleOptionProgressBar_BottomToTop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, bottomToTop: bool ```
    pub fn SetBottomToTop(self: ?*anyopaque, bottomToTop: bool) void {
        qtc.QStyleOptionProgressBar_SetBottomToTop(@ptrCast(self), bottomToTop);
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionProgressBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html
pub const qstyleoptionmenuitem = struct {
    /// New constructs a new QStyleOptionMenuItem object.
    ///
    ///
    pub fn New() QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new();
    }

    /// New2 constructs a new QStyleOptionMenuItem object.
    ///
    /// ``` other: QtC.QStyleOptionMenuItem ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    ///
    /// Returns: ``` qstyleoption_enums.MenuItemType ```
    pub fn MenuItemType(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_MenuItemType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, menuItemType: qstyleoption_enums.MenuItemType ```
    pub fn SetMenuItemType(self: ?*anyopaque, menuItemType: i32) void {
        qtc.QStyleOptionMenuItem_SetMenuItemType(@ptrCast(self), @intCast(menuItemType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    ///
    /// Returns: ``` qstyleoption_enums.CheckType ```
    pub fn CheckType(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_CheckType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, checkType: qstyleoption_enums.CheckType ```
    pub fn SetCheckType(self: ?*anyopaque, checkType: i32) void {
        qtc.QStyleOptionMenuItem_SetCheckType(@ptrCast(self), @intCast(checkType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Checked(self: ?*anyopaque) bool {
        return qtc.QStyleOptionMenuItem_Checked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, checked: bool ```
    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QStyleOptionMenuItem_SetChecked(@ptrCast(self), checked);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn MenuHasCheckableItems(self: ?*anyopaque) bool {
        return qtc.QStyleOptionMenuItem_MenuHasCheckableItems(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, menuHasCheckableItems: bool ```
    pub fn SetMenuHasCheckableItems(self: ?*anyopaque, menuHasCheckableItems: bool) void {
        qtc.QStyleOptionMenuItem_SetMenuHasCheckableItems(@ptrCast(self), menuHasCheckableItems);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn MenuRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionMenuItem_MenuRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, menuRect: QtC.QRect ```
    pub fn SetMenuRect(self: ?*anyopaque, menuRect: QtC.QRect) void {
        qtc.QStyleOptionMenuItem_SetMenuRect(@ptrCast(self), @ptrCast(menuRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionMenuItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionmenuitem.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionMenuItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionMenuItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionMenuItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn MaxIconWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_MaxIconWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, maxIconWidth: i32 ```
    pub fn SetMaxIconWidth(self: ?*anyopaque, maxIconWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetMaxIconWidth(@ptrCast(self), @intCast(maxIconWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn ReservedShortcutWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionMenuItem_ReservedShortcutWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, reservedShortcutWidth: i32 ```
    pub fn SetReservedShortcutWidth(self: ?*anyopaque, reservedShortcutWidth: i32) void {
        qtc.QStyleOptionMenuItem_SetReservedShortcutWidth(@ptrCast(self), @intCast(reservedShortcutWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStyleOptionMenuItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionMenuItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionMenuItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html
pub const qstyleoptiondockwidget = struct {
    /// New constructs a new QStyleOptionDockWidget object.
    ///
    ///
    pub fn New() QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new();
    }

    /// New2 constructs a new QStyleOptionDockWidget object.
    ///
    /// ``` other: QtC.QStyleOptionDockWidget ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.QStyleOptionDockWidget_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&title_str);
        const title_ret = allocator.alloc(u8, title_str.len) catch @panic("qstyleoptiondockwidget.Title: Memory allocation failed");
        @memcpy(title_ret, title_str.data[0..title_str.len]);
        return title_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QStyleOptionDockWidget_SetTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Closable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_Closable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, closable: bool ```
    pub fn SetClosable(self: ?*anyopaque, closable: bool) void {
        qtc.QStyleOptionDockWidget_SetClosable(@ptrCast(self), closable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Movable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_Movable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, movable: bool ```
    pub fn SetMovable(self: ?*anyopaque, movable: bool) void {
        qtc.QStyleOptionDockWidget_SetMovable(@ptrCast(self), movable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Floatable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_Floatable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, floatable: bool ```
    pub fn SetFloatable(self: ?*anyopaque, floatable: bool) void {
        qtc.QStyleOptionDockWidget_SetFloatable(@ptrCast(self), floatable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn VerticalTitleBar(self: ?*anyopaque) bool {
        return qtc.QStyleOptionDockWidget_VerticalTitleBar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, verticalTitleBar: bool ```
    pub fn SetVerticalTitleBar(self: ?*anyopaque, verticalTitleBar: bool) void {
        qtc.QStyleOptionDockWidget_SetVerticalTitleBar(@ptrCast(self), verticalTitleBar);
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionDockWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html
pub const qstyleoptionviewitem = struct {
    /// New constructs a new QStyleOptionViewItem object.
    ///
    ///
    pub fn New() QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new();
    }

    /// New2 constructs a new QStyleOptionViewItem object.
    ///
    /// ``` other: QtC.QStyleOptionViewItem ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn DisplayAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionViewItem_DisplayAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, displayAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetDisplayAlignment(self: ?*anyopaque, displayAlignment: i64) void {
        qtc.QStyleOptionViewItem_SetDisplayAlignment(@ptrCast(self), @intCast(displayAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn DecorationAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionViewItem_DecorationAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, decorationAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetDecorationAlignment(self: ?*anyopaque, decorationAlignment: i64) void {
        qtc.QStyleOptionViewItem_SetDecorationAlignment(@ptrCast(self), @intCast(decorationAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` qnamespace_enums.TextElideMode ```
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_TextElideMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, textElideMode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, textElideMode: i32) void {
        qtc.QStyleOptionViewItem_SetTextElideMode(@ptrCast(self), @intCast(textElideMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` qstyleoption_enums.Position ```
    pub fn DecorationPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_DecorationPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, decorationPosition: qstyleoption_enums.Position ```
    pub fn SetDecorationPosition(self: ?*anyopaque, decorationPosition: i32) void {
        qtc.QStyleOptionViewItem_SetDecorationPosition(@ptrCast(self), @intCast(decorationPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn DecorationSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionViewItem_DecorationSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, decorationSize: QtC.QSize ```
    pub fn SetDecorationSize(self: ?*anyopaque, decorationSize: QtC.QSize) void {
        qtc.QStyleOptionViewItem_SetDecorationSize(@ptrCast(self), @ptrCast(decorationSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStyleOptionViewItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionViewItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn ShowDecorationSelected(self: ?*anyopaque) bool {
        return qtc.QStyleOptionViewItem_ShowDecorationSelected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, showDecorationSelected: bool ```
    pub fn SetShowDecorationSelected(self: ?*anyopaque, showDecorationSelected: bool) void {
        qtc.QStyleOptionViewItem_SetShowDecorationSelected(@ptrCast(self), showDecorationSelected);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.ViewItemFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionViewItem_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, features: flag of qstyleoption_enums.ViewItemFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionViewItem_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QStyleOptionViewItem_Locale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: QtC.QLocale) void {
        qtc.QStyleOptionViewItem_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QStyleOptionViewItem_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Index(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStyleOptionViewItem_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn SetIndex(self: ?*anyopaque, index: QtC.QModelIndex) void {
        qtc.QStyleOptionViewItem_SetIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` qnamespace_enums.CheckState ```
    pub fn CheckState(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_CheckState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, checkState: qnamespace_enums.CheckState ```
    pub fn SetCheckState(self: ?*anyopaque, checkState: i32) void {
        qtc.QStyleOptionViewItem_SetCheckState(@ptrCast(self), @intCast(checkState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionViewItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionViewItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionViewItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptionviewitem.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionViewItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` qstyleoption_enums.ViewItemPosition ```
    pub fn ViewItemPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionViewItem_ViewItemPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, viewItemPosition: qstyleoption_enums.ViewItemPosition ```
    pub fn SetViewItemPosition(self: ?*anyopaque, viewItemPosition: i32) void {
        qtc.QStyleOptionViewItem_SetViewItemPosition(@ptrCast(self), @intCast(viewItemPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QStyleOptionViewItem_BackgroundBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, backgroundBrush: QtC.QBrush ```
    pub fn SetBackgroundBrush(self: ?*anyopaque, backgroundBrush: QtC.QBrush) void {
        qtc.QStyleOptionViewItem_SetBackgroundBrush(@ptrCast(self), @ptrCast(backgroundBrush));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html
pub const qstyleoptiontoolbox = struct {
    /// New constructs a new QStyleOptionToolBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new();
    }

    /// New2 constructs a new QStyleOptionToolBox object.
    ///
    /// ``` other: QtC.QStyleOptionToolBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionToolBox_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbox.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionToolBox_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionToolBox_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionToolBox_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    ///
    /// Returns: ``` qstyleoption_enums.TabPosition ```
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBox_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, position: qstyleoption_enums.TabPosition ```
    pub fn SetPosition(self: ?*anyopaque, position: i32) void {
        qtc.QStyleOptionToolBox_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    ///
    /// Returns: ``` qstyleoption_enums.SelectedPosition ```
    pub fn SelectedPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolBox_SelectedPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, selectedPosition: qstyleoption_enums.SelectedPosition ```
    pub fn SetSelectedPosition(self: ?*anyopaque, selectedPosition: i32) void {
        qtc.QStyleOptionToolBox_SetSelectedPosition(@ptrCast(self), @intCast(selectedPosition));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html
pub const qstyleoptionrubberband = struct {
    /// New constructs a new QStyleOptionRubberBand object.
    ///
    ///
    pub fn New() QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new();
    }

    /// New2 constructs a new QStyleOptionRubberBand object.
    ///
    /// ``` other: QtC.QStyleOptionRubberBand ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    ///
    /// Returns: ``` qrubberband_enums.Shape ```
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionRubberBand_Shape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, shape: qrubberband_enums.Shape ```
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QStyleOptionRubberBand_SetShape(@ptrCast(self), @intCast(shape));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn Opaque(self: ?*anyopaque) bool {
        return qtc.QStyleOptionRubberBand_Opaque(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, opaque: bool ```
    pub fn SetOpaque(self: ?*anyopaque, _opaque: bool) void {
        qtc.QStyleOptionRubberBand_SetOpaque(@ptrCast(self), _opaque);
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionRubberBand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html
pub const qstyleoptioncomplex = struct {
    /// New constructs a new QStyleOptionComplex object.
    ///
    ///
    pub fn New() QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new();
    }

    /// New2 constructs a new QStyleOptionComplex object.
    ///
    /// ``` other: QtC.QStyleOptionComplex ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStyleOptionComplex object.
    ///
    /// ``` version: i32 ```
    pub fn New3(version: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new3(@intCast(version));
    }

    /// New4 constructs a new QStyleOptionComplex object.
    ///
    /// ``` version: i32, typeVal: i32 ```
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new4(@intCast(version), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionComplex, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionComplex, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionComplex, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComplex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionslider.html
pub const qstyleoptionslider = struct {
    /// New constructs a new QStyleOptionSlider object.
    ///
    ///
    pub fn New() QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new();
    }

    /// New2 constructs a new QStyleOptionSlider object.
    ///
    /// ``` other: QtC.QStyleOptionSlider ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QStyleOptionSlider_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn Minimum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_Minimum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, minimum: i32 ```
    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QStyleOptionSlider_SetMinimum(@ptrCast(self), @intCast(minimum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn Maximum(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_Maximum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, maximum: i32 ```
    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QStyleOptionSlider_SetMaximum(@ptrCast(self), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` qslider_enums.TickPosition ```
    pub fn TickPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_TickPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, tickPosition: qslider_enums.TickPosition ```
    pub fn SetTickPosition(self: ?*anyopaque, tickPosition: i32) void {
        qtc.QStyleOptionSlider_SetTickPosition(@ptrCast(self), @intCast(tickPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn TickInterval(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_TickInterval(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, tickInterval: i32 ```
    pub fn SetTickInterval(self: ?*anyopaque, tickInterval: i32) void {
        qtc.QStyleOptionSlider_SetTickInterval(@ptrCast(self), @intCast(tickInterval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn UpsideDown(self: ?*anyopaque) bool {
        return qtc.QStyleOptionSlider_UpsideDown(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, upsideDown: bool ```
    pub fn SetUpsideDown(self: ?*anyopaque, upsideDown: bool) void {
        qtc.QStyleOptionSlider_SetUpsideDown(@ptrCast(self), upsideDown);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn SliderPosition(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_SliderPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, sliderPosition: i32 ```
    pub fn SetSliderPosition(self: ?*anyopaque, sliderPosition: i32) void {
        qtc.QStyleOptionSlider_SetSliderPosition(@ptrCast(self), @intCast(sliderPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn SliderValue(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_SliderValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, sliderValue: i32 ```
    pub fn SetSliderValue(self: ?*anyopaque, sliderValue: i32) void {
        qtc.QStyleOptionSlider_SetSliderValue(@ptrCast(self), @intCast(sliderValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn SingleStep(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_SingleStep(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, singleStep: i32 ```
    pub fn SetSingleStep(self: ?*anyopaque, singleStep: i32) void {
        qtc.QStyleOptionSlider_SetSingleStep(@ptrCast(self), @intCast(singleStep));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn PageStep(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSlider_PageStep(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, pageStep: i32 ```
    pub fn SetPageStep(self: ?*anyopaque, pageStep: i32) void {
        qtc.QStyleOptionSlider_SetPageStep(@ptrCast(self), @intCast(pageStep));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn NotchTarget(self: ?*anyopaque) f64 {
        return qtc.QStyleOptionSlider_NotchTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, notchTarget: f64 ```
    pub fn SetNotchTarget(self: ?*anyopaque, notchTarget: f64) void {
        qtc.QStyleOptionSlider_SetNotchTarget(@ptrCast(self), @floatCast(notchTarget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn DialWrapping(self: ?*anyopaque) bool {
        return qtc.QStyleOptionSlider_DialWrapping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, dialWrapping: bool ```
    pub fn SetDialWrapping(self: ?*anyopaque, dialWrapping: bool) void {
        qtc.QStyleOptionSlider_SetDialWrapping(@ptrCast(self), dialWrapping);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn KeyboardModifiers(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionSlider_KeyboardModifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, keyboardModifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetKeyboardModifiers(self: ?*anyopaque, keyboardModifiers: i64) void {
        qtc.QStyleOptionSlider_SetKeyboardModifiers(@ptrCast(self), @intCast(keyboardModifiers));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionSlider, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionSlider, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionSlider, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSlider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html
pub const qstyleoptionspinbox = struct {
    /// New constructs a new QStyleOptionSpinBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new();
    }

    /// New2 constructs a new QStyleOptionSpinBox object.
    ///
    /// ``` other: QtC.QStyleOptionSpinBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    ///
    /// Returns: ``` qabstractspinbox_enums.ButtonSymbols ```
    pub fn ButtonSymbols(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSpinBox_ButtonSymbols(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, buttonSymbols: qabstractspinbox_enums.ButtonSymbols ```
    pub fn SetButtonSymbols(self: ?*anyopaque, buttonSymbols: i32) void {
        qtc.QStyleOptionSpinBox_SetButtonSymbols(@ptrCast(self), @intCast(buttonSymbols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    ///
    /// Returns: ``` flag of qabstractspinbox_enums.StepEnabledFlag ```
    pub fn StepEnabled(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionSpinBox_StepEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, stepEnabled: flag of qabstractspinbox_enums.StepEnabledFlag ```
    pub fn SetStepEnabled(self: ?*anyopaque, stepEnabled: i64) void {
        qtc.QStyleOptionSpinBox_SetStepEnabled(@ptrCast(self), @intCast(stepEnabled));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn Frame(self: ?*anyopaque) bool {
        return qtc.QStyleOptionSpinBox_Frame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, frame: bool ```
    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QStyleOptionSpinBox_SetFrame(@ptrCast(self), frame);
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSpinBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html
pub const qstyleoptiontoolbutton = struct {
    /// New constructs a new QStyleOptionToolButton object.
    ///
    ///
    pub fn New() QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new();
    }

    /// New2 constructs a new QStyleOptionToolButton object.
    ///
    /// ``` other: QtC.QStyleOptionToolButton ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.ToolButtonFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionToolButton_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, features: flag of qstyleoption_enums.ToolButtonFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionToolButton_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionToolButton_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionToolButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionToolButton_IconSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, iconSize: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionToolButton_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionToolButton_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontoolbutton.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionToolButton_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` qnamespace_enums.ArrowType ```
    pub fn ArrowType(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolButton_ArrowType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, arrowType: qnamespace_enums.ArrowType ```
    pub fn SetArrowType(self: ?*anyopaque, arrowType: i32) void {
        qtc.QStyleOptionToolButton_SetArrowType(@ptrCast(self), @intCast(arrowType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` qnamespace_enums.ToolButtonStyle ```
    pub fn ToolButtonStyle(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionToolButton_ToolButtonStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, toolButtonStyle: qnamespace_enums.ToolButtonStyle ```
    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QStyleOptionToolButton_SetToolButtonStyle(@ptrCast(self), @intCast(toolButtonStyle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QStyleOptionToolButton_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, pos: QtC.QPoint ```
    pub fn SetPos(self: ?*anyopaque, pos: QtC.QPoint) void {
        qtc.QStyleOptionToolButton_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStyleOptionToolButton_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: QtC.QFont) void {
        qtc.QStyleOptionToolButton_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html
pub const qstyleoptioncombobox = struct {
    /// New constructs a new QStyleOptionComboBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new();
    }

    /// New2 constructs a new QStyleOptionComboBox object.
    ///
    /// ``` other: QtC.QStyleOptionComboBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn Editable(self: ?*anyopaque) bool {
        return qtc.QStyleOptionComboBox_Editable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, editable: bool ```
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QStyleOptionComboBox_SetEditable(@ptrCast(self), editable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn PopupRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOptionComboBox_PopupRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, popupRect: QtC.QRect ```
    pub fn SetPopupRect(self: ?*anyopaque, popupRect: QtC.QRect) void {
        qtc.QStyleOptionComboBox_SetPopupRect(@ptrCast(self), @ptrCast(popupRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn Frame(self: ?*anyopaque) bool {
        return qtc.QStyleOptionComboBox_Frame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, frame: bool ```
    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QStyleOptionComboBox_SetFrame(@ptrCast(self), frame);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, allocator: std.mem.Allocator ```
    pub fn CurrentText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const currentText_str = qtc.QStyleOptionComboBox_CurrentText(@ptrCast(self));
        defer qtc.libqt_string_free(&currentText_str);
        const currentText_ret = allocator.alloc(u8, currentText_str.len) catch @panic("qstyleoptioncombobox.CurrentText: Memory allocation failed");
        @memcpy(currentText_ret, currentText_str.data[0..currentText_str.len]);
        return currentText_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, currentText: []const u8 ```
    pub fn SetCurrentText(self: ?*anyopaque, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
            .len = currentText.len,
            .data = currentText.ptr,
        };
        qtc.QStyleOptionComboBox_SetCurrentText(@ptrCast(self), currentText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn CurrentIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionComboBox_CurrentIcon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, currentIcon: QtC.QIcon ```
    pub fn SetCurrentIcon(self: ?*anyopaque, currentIcon: QtC.QIcon) void {
        qtc.QStyleOptionComboBox_SetCurrentIcon(@ptrCast(self), @ptrCast(currentIcon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStyleOptionComboBox_IconSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, iconSize: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, iconSize: QtC.QSize) void {
        qtc.QStyleOptionComboBox_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn TextAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComboBox_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, textAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i64) void {
        qtc.QStyleOptionComboBox_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComboBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html
pub const qstyleoptiontitlebar = struct {
    /// New constructs a new QStyleOptionTitleBar object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new();
    }

    /// New2 constructs a new QStyleOptionTitleBar object.
    ///
    /// ``` other: QtC.QStyleOptionTitleBar ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionTitleBar_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiontitlebar.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionTitleBar_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStyleOptionTitleBar_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: QtC.QIcon) void {
        qtc.QStyleOptionTitleBar_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn TitleBarState(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionTitleBar_TitleBarState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, titleBarState: i32 ```
    pub fn SetTitleBarState(self: ?*anyopaque, titleBarState: i32) void {
        qtc.QStyleOptionTitleBar_SetTitleBarState(@ptrCast(self), @intCast(titleBarState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn TitleBarFlags(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionTitleBar_TitleBarFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, titleBarFlags: flag of qnamespace_enums.WindowType ```
    pub fn SetTitleBarFlags(self: ?*anyopaque, titleBarFlags: i64) void {
        qtc.QStyleOptionTitleBar_SetTitleBarFlags(@ptrCast(self), @intCast(titleBarFlags));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTitleBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html
pub const qstyleoptiongroupbox = struct {
    /// New constructs a new QStyleOptionGroupBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new();
    }

    /// New2 constructs a new QStyleOptionGroupBox object.
    ///
    /// ``` other: QtC.QStyleOptionGroupBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    ///
    /// Returns: ``` flag of qstyleoption_enums.FrameFeature ```
    pub fn Features(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionGroupBox_Features(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, features: flag of qstyleoption_enums.FrameFeature ```
    pub fn SetFeatures(self: ?*anyopaque, features: i64) void {
        qtc.QStyleOptionGroupBox_SetFeatures(@ptrCast(self), @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.QStyleOptionGroupBox_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&text_str);
        const text_ret = allocator.alloc(u8, text_str.len) catch @panic("qstyleoptiongroupbox.Text: Memory allocation failed");
        @memcpy(text_ret, text_str.data[0..text_str.len]);
        return text_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyleOptionGroupBox_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn TextAlignment(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionGroupBox_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, textAlignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i64) void {
        qtc.QStyleOptionGroupBox_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn TextColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QStyleOptionGroupBox_TextColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, textColor: QtC.QColor ```
    pub fn SetTextColor(self: ?*anyopaque, textColor: QtC.QColor) void {
        qtc.QStyleOptionGroupBox_SetTextColor(@ptrCast(self), @ptrCast(textColor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionGroupBox_LineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionGroupBox_MidLineWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QStyleOptionGroupBox_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGroupBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html
pub const qstyleoptionsizegrip = struct {
    /// New constructs a new QStyleOptionSizeGrip object.
    ///
    ///
    pub fn New() QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new();
    }

    /// New2 constructs a new QStyleOptionSizeGrip object.
    ///
    /// ``` other: QtC.QStyleOptionSizeGrip ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    ///
    /// Returns: ``` qnamespace_enums.Corner ```
    pub fn Corner(self: ?*anyopaque) i32 {
        return qtc.QStyleOptionSizeGrip_Corner(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, corner: qnamespace_enums.Corner ```
    pub fn SetCorner(self: ?*anyopaque, corner: i32) void {
        qtc.QStyleOptionSizeGrip_SetCorner(@ptrCast(self), @intCast(corner));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn SubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_SubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, subControls: flag of qstyle_enums.SubControl ```
    pub fn SetSubControls(self: ?*anyopaque, subControls: i64) void {
        qtc.QStyleOptionComplex_SetSubControls(@ptrCast(self), @intCast(subControls));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    ///
    /// Returns: ``` flag of qstyle_enums.SubControl ```
    pub fn ActiveSubControls(self: ?*anyopaque) i64 {
        return qtc.QStyleOptionComplex_ActiveSubControls(@ptrCast(self));
    }

    /// Inherited from QStyleOptionComplex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, activeSubControls: flag of qstyle_enums.SubControl ```
    pub fn SetActiveSubControls(self: ?*anyopaque, activeSubControls: i64) void {
        qtc.QStyleOptionComplex_SetActiveSubControls(@ptrCast(self), @intCast(activeSubControls));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSizeGrip_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html
pub const qstyleoptiongraphicsitem = struct {
    /// New constructs a new QStyleOptionGraphicsItem object.
    ///
    ///
    pub fn New() QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new();
    }

    /// New2 constructs a new QStyleOptionGraphicsItem object.
    ///
    /// ``` other: QtC.QStyleOptionGraphicsItem ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn ExposedRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QStyleOptionGraphicsItem_ExposedRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, exposedRect: QtC.QRectF ```
    pub fn SetExposedRect(self: ?*anyopaque, exposedRect: QtC.QRectF) void {
        qtc.QStyleOptionGraphicsItem_SetExposedRect(@ptrCast(self), @ptrCast(exposedRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
    ///
    /// ``` worldTransform: QtC.QTransform ```
    pub fn LevelOfDetailFromTransform(worldTransform: ?*anyopaque) f64 {
        return qtc.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(@ptrCast(worldTransform));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGraphicsItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturn.html
pub const qstylehintreturn = struct {
    /// New constructs a new QStyleHintReturn object.
    ///
    ///
    pub fn New() QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new();
    }

    /// New2 constructs a new QStyleHintReturn object.
    ///
    /// ``` param1: QtC.QStyleHintReturn ```
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QStyleHintReturn object.
    ///
    /// ``` version: i32 ```
    pub fn New3(version: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new3(@intCast(version));
    }

    /// New4 constructs a new QStyleHintReturn object.
    ///
    /// ``` version: i32, typeVal: i32 ```
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new4(@intCast(version), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ``` self: QtC.QStyleHintReturn ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ``` self: QtC.QStyleHintReturn, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ``` self: QtC.QStyleHintReturn ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ``` self: QtC.QStyleHintReturn, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), @intCast(_type));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleHintReturn, param1: QtC.QStyleHintReturn ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturn_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleHintReturn ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturn_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html
pub const qstylehintreturnmask = struct {
    /// New constructs a new QStyleHintReturnMask object.
    ///
    ///
    pub fn New() QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new();
    }

    /// New2 constructs a new QStyleHintReturnMask object.
    ///
    /// ``` param1: QtC.QStyleHintReturnMask ```
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ``` self: QtC.QStyleHintReturnMask ```
    pub fn Region(self: ?*anyopaque) QtC.QRegion {
        return qtc.QStyleHintReturnMask_Region(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
    ///
    /// ``` self: QtC.QStyleHintReturnMask, region: QtC.QRegion ```
    pub fn SetRegion(self: ?*anyopaque, region: QtC.QRegion) void {
        qtc.QStyleHintReturnMask_SetRegion(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleHintReturnMask, param1: QtC.QStyleHintReturnMask ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ``` self: QtC.QStyleHintReturnMask ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ``` self: QtC.QStyleHintReturnMask, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ``` self: QtC.QStyleHintReturnMask ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ``` self: QtC.QStyleHintReturnMask, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), @intCast(_type));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleHintReturnMask ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html
pub const qstylehintreturnvariant = struct {
    /// New constructs a new QStyleHintReturnVariant object.
    ///
    ///
    pub fn New() QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new();
    }

    /// New2 constructs a new QStyleHintReturnVariant object.
    ///
    /// ``` param1: QtC.QStyleHintReturnVariant ```
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant ```
    pub fn Variant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QStyleHintReturnVariant_Variant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant, variant: QtC.QVariant ```
    pub fn SetVariant(self: ?*anyopaque, variant: QtC.QVariant) void {
        qtc.QStyleHintReturnVariant_SetVariant(@ptrCast(self), @ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator-eq)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant, param1: QtC.QStyleHintReturnVariant ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Version(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleHintReturn_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleHintReturn_Type(@ptrCast(self));
    }

    /// Inherited from QStyleHintReturn
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleHintReturn_SetType(@ptrCast(self), @intCast(_type));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleHintReturnVariant ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoption.html#types
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
