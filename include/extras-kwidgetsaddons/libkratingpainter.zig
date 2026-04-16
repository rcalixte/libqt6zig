const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIcon = @import("libqt6").QIcon;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kratingpainter.html)
pub const KRatingPainter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRatingPainter,

    pub const _is_KRatingPainter = {};

    /// New constructs a new KRatingPainter object.
    ///
    pub fn New() KRatingPainter {
        return .{ .ptr = qtc.KRatingPainter_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#maxRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn MaxRating(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_MaxRating(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#halfStepsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn HalfStepsEnabled(self: KRatingPainter) bool {
        return qtc.KRatingPainter_HalfStepsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn Icon(self: KRatingPainter) QIcon {
        return .{ .ptr = qtc.KRatingPainter_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn IsEnabled(self: KRatingPainter) bool {
        return qtc.KRatingPainter_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#customPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn CustomPixmap(self: KRatingPainter) QPixmap {
        return .{ .ptr = qtc.KRatingPainter_CustomPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn Spacing(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_Spacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setMaxRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` max: i32 `
    ///
    pub fn SetMaxRating(self: KRatingPainter, max: i32) void {
        qtc.KRatingPainter_SetMaxRating(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setHalfStepsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHalfStepsEnabled(self: KRatingPainter, enabled: bool) void {
        qtc.KRatingPainter_SetHalfStepsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: KRatingPainter, alignVal: i32) void {
        qtc.KRatingPainter_SetAlignment(@ptrCast(self.ptr), @bitCast(alignVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KRatingPainter, direction: i32) void {
        qtc.KRatingPainter_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KRatingPainter, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KRatingPainter_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KRatingPainter, enabled: bool) void {
        qtc.KRatingPainter_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setCustomPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SetCustomPixmap(self: KRatingPainter, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KRatingPainter_SetCustomPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: KRatingPainter, spacing: i32) void {
        qtc.KRatingPainter_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` rating: i32 `
    ///
    pub fn Paint(self: KRatingPainter, painter: anytype, rect: anytype, rating: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#ratingFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` pos: QPoint `
    ///
    pub fn RatingFromPosition(self: KRatingPainter, rect: anytype, pos: anytype) i32 {
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.KRatingPainter_RatingFromPosition(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paintRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` rating: i32 `
    ///
    pub fn PaintRating(p: anytype, rect: anytype, alignVal: i32, rating: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_PaintRating(@ptrCast(p.ptr), @ptrCast(rect.ptr), @bitCast(alignVal), @bitCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#getRatingFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` pos: QPoint `
    ///
    pub fn GetRatingFromPosition(rect: anytype, alignVal: i32, direction: i32, pos: anytype) i32 {
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.KRatingPainter_GetRatingFromPosition(@ptrCast(rect.ptr), @bitCast(alignVal), @bitCast(direction), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` rating: i32 `
    ///
    /// ` hoverRating: i32 `
    ///
    pub fn Paint4(self: KRatingPainter, painter: anytype, rect: anytype, rating: i32, hoverRating: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(rating), @bitCast(hoverRating));
    }

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#paintRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` rating: i32 `
    ///
    /// ` hoverRating: i32 `
    ///
    pub fn PaintRating5(p: anytype, rect: anytype, alignVal: i32, rating: i32, hoverRating: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_PaintRating5(@ptrCast(p.ptr), @ptrCast(rect.ptr), @bitCast(alignVal), @bitCast(rating), @bitCast(hoverRating));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#dtor.KRatingPainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn Delete(self: KRatingPainter) void {
        qtc.KRatingPainter_Delete(@ptrCast(self.ptr));
    }
};
