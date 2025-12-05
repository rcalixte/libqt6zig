const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kratingpainter.html)
pub const kratingpainter = struct {
    /// New constructs a new KRatingPainter object.
    ///
    pub fn New() QtC.KRatingPainter {
        return qtc.KRatingPainter_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#maxRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn MaxRating(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_MaxRating(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#halfStepsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn HalfStepsEnabled(self: ?*anyopaque) bool {
        return qtc.KRatingPainter_HalfStepsEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_Alignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_LayoutDirection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.KRatingPainter_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.KRatingPainter_IsEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#customPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn CustomPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KRatingPainter_CustomPixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.KRatingPainter_Spacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setMaxRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` max: i32 `
    ///
    pub fn SetMaxRating(self: ?*anyopaque, max: i32) void {
        qtc.KRatingPainter_SetMaxRating(@ptrCast(self), @intCast(max));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setHalfStepsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHalfStepsEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.KRatingPainter_SetHalfStepsEnabled(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, alignVal: i32) void {
        qtc.KRatingPainter_SetAlignment(@ptrCast(self), @intCast(alignVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.KRatingPainter_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.KRatingPainter_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.KRatingPainter_SetEnabled(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setCustomPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SetCustomPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KRatingPainter_SetCustomPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.KRatingPainter_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` rating: i32 `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, rating: i32) void {
        qtc.KRatingPainter_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#ratingFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn RatingFromPosition(self: ?*anyopaque, rect: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.KRatingPainter_RatingFromPosition(@ptrCast(self), @ptrCast(rect), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paintRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` rating: i32 `
    ///
    pub fn PaintRating(p: ?*anyopaque, rect: ?*anyopaque, alignVal: i32, rating: i32) void {
        qtc.KRatingPainter_PaintRating(@ptrCast(p), @ptrCast(rect), @intCast(alignVal), @intCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#getRatingFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn GetRatingFromPosition(rect: ?*anyopaque, alignVal: i32, direction: i32, pos: ?*anyopaque) i32 {
        return qtc.KRatingPainter_GetRatingFromPosition(@ptrCast(rect), @intCast(alignVal), @intCast(direction), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` rating: i32 `
    ///
    /// ` hoverRating: i32 `
    ///
    pub fn Paint4(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, rating: i32, hoverRating: i32) void {
        qtc.KRatingPainter_Paint4(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(rating), @intCast(hoverRating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paintRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` rating: i32 `
    ///
    /// ` hoverRating: i32 `
    ///
    pub fn PaintRating5(p: ?*anyopaque, rect: ?*anyopaque, alignVal: i32, rating: i32, hoverRating: i32) void {
        qtc.KRatingPainter_PaintRating5(@ptrCast(p), @ptrCast(rect), @intCast(alignVal), @intCast(rating), @intCast(hoverRating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#dtor.KRatingPainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KRatingPainter `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRatingPainter_Delete(@ptrCast(self));
    }
};
