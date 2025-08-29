const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// https://api-staging.kde.org/kratingpainter.html
pub const kratingpainter = struct {
    /// New constructs a new KRatingPainter object.
    ///
    ///
    pub fn New() QtC.KRatingPainter {
        return qtc.KRatingPainter_new();
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#maxRating)
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn MaxRating(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_MaxRating(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#halfStepsEnabled)
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn HalfStepsEnabled(self: ?*anyopaque) bool {
        return qtc.KRatingPainter_HalfStepsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#alignment)
    ///
    /// ``` self: QtC.KRatingPainter ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_Alignment(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#layoutDirection)
    ///
    /// ``` self: QtC.KRatingPainter ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_LayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#icon)
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.KRatingPainter_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#isEnabled)
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.KRatingPainter_IsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#customPixmap)
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn CustomPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KRatingPainter_CustomPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#spacing)
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setMaxRating)
    ///
    /// ``` self: QtC.KRatingPainter, max: i32 ```
    pub fn SetMaxRating(self: ?*anyopaque, max: i32) void {
        qtc.KRatingPainter_SetMaxRating(@ptrCast(self), @intCast(max));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setHalfStepsEnabled)
    ///
    /// ``` self: QtC.KRatingPainter, enabled: bool ```
    pub fn SetHalfStepsEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.KRatingPainter_SetHalfStepsEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setAlignment)
    ///
    /// ``` self: QtC.KRatingPainter, alignVal: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, alignVal: i32) void {
        qtc.KRatingPainter_SetAlignment(@ptrCast(self), @intCast(alignVal));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setLayoutDirection)
    ///
    /// ``` self: QtC.KRatingPainter, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.KRatingPainter_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setIcon)
    ///
    /// ``` self: QtC.KRatingPainter, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.KRatingPainter_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setEnabled)
    ///
    /// ``` self: QtC.KRatingPainter, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.KRatingPainter_SetEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setCustomPixmap)
    ///
    /// ``` self: QtC.KRatingPainter, pixmap: QtC.QPixmap ```
    pub fn SetCustomPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KRatingPainter_SetCustomPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setSpacing)
    ///
    /// ``` self: QtC.KRatingPainter, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.KRatingPainter_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paint)
    ///
    /// ``` self: QtC.KRatingPainter, painter: QtC.QPainter, rect: QtC.QRect, rating: i32 ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, rating: i32) void {
        qtc.KRatingPainter_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(rating));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#ratingFromPosition)
    ///
    /// ``` self: QtC.KRatingPainter, rect: QtC.QRect, pos: QtC.QPoint ```
    pub fn RatingFromPosition(self: ?*anyopaque, rect: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.KRatingPainter_RatingFromPosition(@ptrCast(self), @ptrCast(rect), @ptrCast(pos));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paintRating)
    ///
    /// ``` p: QtC.QPainter, rect: QtC.QRect, alignVal: flag of qnamespace_enums.AlignmentFlag, rating: i32 ```
    pub fn PaintRating(p: ?*anyopaque, rect: ?*anyopaque, alignVal: i32, rating: i32) void {
        qtc.KRatingPainter_PaintRating(@ptrCast(p), @ptrCast(rect), @intCast(alignVal), @intCast(rating));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#getRatingFromPosition)
    ///
    /// ``` rect: QtC.QRect, alignVal: flag of qnamespace_enums.AlignmentFlag, direction: qnamespace_enums.LayoutDirection, pos: QtC.QPoint ```
    pub fn GetRatingFromPosition(rect: ?*anyopaque, alignVal: i32, direction: i32, pos: ?*anyopaque) i32 {
        return qtc.KRatingPainter_GetRatingFromPosition(@ptrCast(rect), @intCast(alignVal), @intCast(direction), @ptrCast(pos));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paint)
    ///
    /// ``` self: QtC.KRatingPainter, painter: QtC.QPainter, rect: QtC.QRect, rating: i32, hoverRating: i32 ```
    pub fn Paint4(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, rating: i32, hoverRating: i32) void {
        qtc.KRatingPainter_Paint4(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(rating), @intCast(hoverRating));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paintRating)
    ///
    /// ``` p: QtC.QPainter, rect: QtC.QRect, alignVal: flag of qnamespace_enums.AlignmentFlag, rating: i32, hoverRating: i32 ```
    pub fn PaintRating5(p: ?*anyopaque, rect: ?*anyopaque, alignVal: i32, rating: i32, hoverRating: i32) void {
        qtc.KRatingPainter_PaintRating5(@ptrCast(p), @ptrCast(rect), @intCast(alignVal), @intCast(rating), @intCast(hoverRating));
    }

    /// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#dtor.KRatingPainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KRatingPainter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRatingPainter_Delete(@ptrCast(self));
    }
};
