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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::MovingRangeFeedback object in C++ memory
    ///
    pub fn new() KTextEditor__MovingRangeFeedback {
        return .{ .ptr = qtc.KTextEditor__MovingRangeFeedback_new() };
    }

    /// ### DEPRECATED: Use `rangeEmpty` instead
    ///
    pub const RangeEmpty = rangeEmpty;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    pub fn rangeEmpty(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_RangeEmpty(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `onRangeEmpty` instead
    ///
    pub const OnRangeEmpty = onRangeEmpty;

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
    pub fn onRangeEmpty(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRangeEmpty` instead
    ///
    pub const SuperRangeEmpty = superRangeEmpty;

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
    pub fn superRangeEmpty(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_SuperRangeEmpty(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `rangeInvalid` instead
    ///
    pub const RangeInvalid = rangeInvalid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    /// ` range: KTextEditor__MovingRange `
    ///
    pub fn rangeInvalid(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_RangeInvalid(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `onRangeInvalid` instead
    ///
    pub const OnRangeInvalid = onRangeInvalid;

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
    pub fn onRangeInvalid(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnRangeInvalid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRangeInvalid` instead
    ///
    pub const SuperRangeInvalid = superRangeInvalid;

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
    pub fn superRangeInvalid(self: KTextEditor__MovingRangeFeedback, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        qtc.KTextEditor__MovingRangeFeedback_SuperRangeInvalid(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `mouseEnteredRange` instead
    ///
    pub const MouseEnteredRange = mouseEnteredRange;

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
    pub fn mouseEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_MouseEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onMouseEnteredRange` instead
    ///
    pub const OnMouseEnteredRange = onMouseEnteredRange;

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
    pub fn onMouseEnteredRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseEnteredRange` instead
    ///
    pub const SuperMouseEnteredRange = superMouseEnteredRange;

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
    pub fn superMouseEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperMouseEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `mouseExitedRange` instead
    ///
    pub const MouseExitedRange = mouseExitedRange;

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
    pub fn mouseExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_MouseExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onMouseExitedRange` instead
    ///
    pub const OnMouseExitedRange = onMouseExitedRange;

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
    pub fn onMouseExitedRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnMouseExitedRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseExitedRange` instead
    ///
    pub const SuperMouseExitedRange = superMouseExitedRange;

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
    pub fn superMouseExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperMouseExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `caretEnteredRange` instead
    ///
    pub const CaretEnteredRange = caretEnteredRange;

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
    pub fn caretEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_CaretEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onCaretEnteredRange` instead
    ///
    pub const OnCaretEnteredRange = onCaretEnteredRange;

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
    pub fn onCaretEnteredRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCaretEnteredRange` instead
    ///
    pub const SuperCaretEnteredRange = superCaretEnteredRange;

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
    pub fn superCaretEnteredRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperCaretEnteredRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `caretExitedRange` instead
    ///
    pub const CaretExitedRange = caretExitedRange;

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
    pub fn caretExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_CaretExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onCaretExitedRange` instead
    ///
    pub const OnCaretExitedRange = onCaretExitedRange;

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
    pub fn onCaretExitedRange(self: KTextEditor__MovingRangeFeedback, callback: *const fn (KTextEditor__MovingRangeFeedback, KTextEditor__MovingRange, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MovingRangeFeedback_OnCaretExitedRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCaretExitedRange` instead
    ///
    pub const SuperCaretExitedRange = superCaretExitedRange;

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
    pub fn superCaretExitedRange(self: KTextEditor__MovingRangeFeedback, range: anytype, view: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__MovingRange;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRangeFeedback_SuperCaretExitedRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MovingRangeFeedback `
    ///
    pub fn delete(self: KTextEditor__MovingRangeFeedback) void {
        qtc.KTextEditor__MovingRangeFeedback_Delete(@ptrCast(self.ptr));
    }
};
