const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__MovingRange = @import("libqt6").KTextEditor__MovingRange;
const KTextEditor__View = @import("libqt6").KTextEditor__View;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html)
pub const KTextEditor__MovingRangeFeedback = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__MovingRangeFeedback,

    pub const _is_KTextEditor__MovingRangeFeedback = {};

    /// New constructs a new KTextEditor::MovingRangeFeedback object.
    ///
    pub fn New() KTextEditor__MovingRangeFeedback {
        return .{ .ptr = qtc.KTextEditor__MovingRangeFeedback_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    pub fn RangeEmpty(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_RangeEmpty(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: KTextEditor__MovingRangeFeedback, range: KTextEditor__MovingRange) callconv(.c) void `
    ///
    pub fn OnRangeEmpty(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRangeEmpty` instead
    ///
    pub const QBaseRangeEmpty = SuperRangeEmpty;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    pub fn SuperRangeEmpty(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_SuperRangeEmpty(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    pub fn RangeInvalid(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_RangeInvalid(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: KTextEditor__MovingRangeFeedback, range: KTextEditor__MovingRange) callconv(.c) void `
    ///
    pub fn OnRangeInvalid(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeInvalid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRangeInvalid` instead
    ///
    pub const QBaseRangeInvalid = SuperRangeInvalid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    pub fn SuperRangeInvalid(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_SuperRangeInvalid(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn MouseEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_MouseEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: KTextEditor__MovingRangeFeedback, range: KTextEditor__MovingRange, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnMouseEnteredRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseEnteredRange` instead
    ///
    pub const QBaseMouseEnteredRange = SuperMouseEnteredRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SuperMouseEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperMouseEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn MouseExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_MouseExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: KTextEditor__MovingRangeFeedback, range: KTextEditor__MovingRange, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnMouseExitedRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseExitedRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseExitedRange` instead
    ///
    pub const QBaseMouseExitedRange = SuperMouseExitedRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SuperMouseExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperMouseExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn CaretEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_CaretEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: KTextEditor__MovingRangeFeedback, range: KTextEditor__MovingRange, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnCaretEnteredRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCaretEnteredRange` instead
    ///
    pub const QBaseCaretEnteredRange = SuperCaretEnteredRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SuperCaretEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperCaretEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn CaretExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_CaretExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: KTextEditor__MovingRangeFeedback, range: KTextEditor__MovingRange, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnCaretExitedRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretExitedRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCaretExitedRange` instead
    ///
    pub const QBaseCaretExitedRange = SuperCaretExitedRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SuperCaretExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperCaretExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    pub fn Delete(self: KTextEditor__MovingRangeFeedback) void {
        qtc.KTextEditor__MovingRangeFeedback_Delete(@ptrCast(self.ptr));
    }
};
