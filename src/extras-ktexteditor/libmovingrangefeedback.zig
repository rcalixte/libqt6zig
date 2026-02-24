const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html)
pub const ktexteditor__movingrangefeedback = struct {
    /// New constructs a new KTextEditor::MovingRangeFeedback object.
    ///
    pub fn New() QtC.KTextEditor__MovingRangeFeedback {
        return qtc.KTextEditor__MovingRangeFeedback_new();
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    pub fn RangeEmpty(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_RangeEmpty(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange) callconv(.c) void `
    ///
    pub fn OnRangeEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    pub fn SuperRangeEmpty(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_SuperRangeEmpty(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    pub fn RangeInvalid(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_RangeInvalid(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange) callconv(.c) void `
    ///
    pub fn OnRangeInvalid(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeInvalid(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    pub fn SuperRangeInvalid(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_SuperRangeInvalid(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn MouseEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_MouseEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnMouseEnteredRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn SuperMouseEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_SuperMouseEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn MouseExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_MouseExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnMouseExitedRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseExitedRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn SuperMouseExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_SuperMouseExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn CaretEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_CaretEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnCaretEnteredRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn SuperCaretEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_SuperCaretEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn CaretExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_CaretExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnCaretExitedRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretExitedRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn SuperCaretExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_SuperCaretExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__MovingRangeFeedback `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_Delete(@ptrCast(self));
    }
};
