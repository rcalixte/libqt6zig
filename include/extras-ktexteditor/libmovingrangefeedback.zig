const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/ktexteditor-movingrangefeedback.html
pub const ktexteditor__movingrangefeedback = struct {
    /// New constructs a new KTextEditor::MovingRangeFeedback object.
    ///
    ///
    pub fn New() QtC.KTextEditor__MovingRangeFeedback {
        return qtc.KTextEditor__MovingRangeFeedback_new();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange ```
    pub fn RangeEmpty(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_RangeEmpty(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange) callconv(.c) void ```
    pub fn OnRangeEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange ```
    pub fn QBaseRangeEmpty(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_QBaseRangeEmpty(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange ```
    pub fn RangeInvalid(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_RangeInvalid(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange) callconv(.c) void ```
    pub fn OnRangeInvalid(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeInvalid(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange ```
    pub fn QBaseRangeInvalid(self: ?*anyopaque, range: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_QBaseRangeInvalid(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn MouseEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_MouseEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void ```
    pub fn OnMouseEnteredRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn QBaseMouseEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_QBaseMouseEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn MouseExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_MouseExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void ```
    pub fn OnMouseExitedRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseExitedRange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn QBaseMouseExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_QBaseMouseExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn CaretEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_CaretEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void ```
    pub fn OnCaretEnteredRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn QBaseCaretEnteredRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_QBaseCaretEnteredRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn CaretExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_CaretExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, callback: *const fn (self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View) callconv(.c) void ```
    pub fn OnCaretExitedRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretExitedRange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback, range: QtC.KTextEditor__MovingRange, view: QtC.KTextEditor__View ```
    pub fn QBaseCaretExitedRange(self: ?*anyopaque, range: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_QBaseCaretExitedRange(@ptrCast(self), @ptrCast(range), @ptrCast(view));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__MovingRangeFeedback ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__MovingRangeFeedback_Delete(@ptrCast(self));
    }
};
