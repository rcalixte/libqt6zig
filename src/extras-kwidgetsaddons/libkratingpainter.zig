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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KRatingPainter object in C++ memory
    ///
    pub fn new() KRatingPainter {
        return .{ .ptr = qtc.KRatingPainter_new() };
    }

    /// ### DEPRECATED: Use `maxRating` instead
    ///
    pub const MaxRating = maxRating;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#maxRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn maxRating(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_MaxRating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `halfStepsEnabled` instead
    ///
    pub const HalfStepsEnabled = halfStepsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#halfStepsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn halfStepsEnabled(self: KRatingPainter) bool {
        return qtc.KRatingPainter_HalfStepsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn icon(self: KRatingPainter) QIcon {
        return .{ .ptr = qtc.KRatingPainter_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn isEnabled(self: KRatingPainter) bool {
        return qtc.KRatingPainter_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `customPixmap` instead
    ///
    pub const CustomPixmap = customPixmap;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#customPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn customPixmap(self: KRatingPainter) QPixmap {
        return .{ .ptr = qtc.KRatingPainter_CustomPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn spacing(self: KRatingPainter) i32 {
        return qtc.KRatingPainter_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxRating` instead
    ///
    pub const SetMaxRating = setMaxRating;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setMaxRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` max: i32 `
    ///
    pub fn setMaxRating(self: KRatingPainter, max: i32) void {
        qtc.KRatingPainter_SetMaxRating(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### DEPRECATED: Use `setHalfStepsEnabled` instead
    ///
    pub const SetHalfStepsEnabled = setHalfStepsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setHalfStepsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHalfStepsEnabled(self: KRatingPainter, enabled: bool) void {
        qtc.KRatingPainter_SetHalfStepsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: KRatingPainter, alignVal: i32) void {
        qtc.KRatingPainter_SetAlignment(@ptrCast(self.ptr), @bitCast(alignVal));
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: KRatingPainter, direction: i32) void {
        qtc.KRatingPainter_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KRatingPainter, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.KRatingPainter_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KRatingPainter, enabled: bool) void {
        qtc.KRatingPainter_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setCustomPixmap` instead
    ///
    pub const SetCustomPixmap = setCustomPixmap;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setCustomPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn setCustomPixmap(self: KRatingPainter, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KRatingPainter_SetCustomPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRatingPainter `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setSpacing(self: KRatingPainter, _spacing: i32) void {
        qtc.KRatingPainter_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

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
    pub fn paint(self: KRatingPainter, painter: anytype, rect: anytype, rating: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(rating));
    }

    /// ### DEPRECATED: Use `ratingFromPosition` instead
    ///
    pub const RatingFromPosition = ratingFromPosition;

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
    pub fn ratingFromPosition(self: KRatingPainter, rect: anytype, pos: anytype) i32 {
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.KRatingPainter_RatingFromPosition(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `paintRating` instead
    ///
    pub const PaintRating = paintRating;

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
    pub fn paintRating(p: anytype, rect: anytype, alignVal: i32, rating: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_PaintRating(@ptrCast(p.ptr), @ptrCast(rect.ptr), @bitCast(alignVal), @bitCast(rating));
    }

    /// ### DEPRECATED: Use `getRatingFromPosition` instead
    ///
    pub const GetRatingFromPosition = getRatingFromPosition;

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
    pub fn getRatingFromPosition(rect: anytype, alignVal: i32, direction: i32, pos: anytype) i32 {
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.KRatingPainter_GetRatingFromPosition(@ptrCast(rect.ptr), @bitCast(alignVal), @bitCast(direction), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `paint4` instead
    ///
    pub const Paint4 = paint4;

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
    pub fn paint4(self: KRatingPainter, painter: anytype, rect: anytype, rating: i32, hoverRating: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(rating), @bitCast(hoverRating));
    }

    /// ### DEPRECATED: Use `paintRating5` instead
    ///
    pub const PaintRating5 = paintRating5;

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
    pub fn paintRating5(p: anytype, rect: anytype, alignVal: i32, rating: i32, hoverRating: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KRatingPainter_PaintRating5(@ptrCast(p.ptr), @ptrCast(rect.ptr), @bitCast(alignVal), @bitCast(rating), @bitCast(hoverRating));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kratingpainter.html#dtor.KRatingPainter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KRatingPainter `
    ///
    pub fn delete(self: KRatingPainter) void {
        qtc.KRatingPainter_Delete(@ptrCast(self.ptr));
    }
};
