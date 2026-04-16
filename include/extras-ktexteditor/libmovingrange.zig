const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__LineRange = @import("libqt6").KTextEditor__LineRange;
const KTextEditor__MovingCursor = @import("libqt6").KTextEditor__MovingCursor;
const KTextEditor__MovingRangeFeedback = @import("libqt6").KTextEditor__MovingRangeFeedback;
const KTextEditor__Range = @import("libqt6").KTextEditor__Range;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const movingrange_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html)
pub const KTextEditor__MovingRange = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__MovingRange,

    pub const _is_KTextEditor__MovingRange = {};

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setInsertBehaviors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` insertBehaviors: flag of movingrange_enums.InsertBehavior `
    ///
    pub fn SetInsertBehaviors(self: KTextEditor__MovingRange, insertBehaviors: i32) void {
        qtc.KTextEditor__MovingRange_SetInsertBehaviors(@ptrCast(self.ptr), @bitCast(insertBehaviors));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#insertBehaviors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ## Returns:
    ///
    /// ` flag of movingrange_enums.InsertBehavior `
    ///
    pub fn InsertBehaviors(self: KTextEditor__MovingRange) i32 {
        return qtc.KTextEditor__MovingRange_InsertBehaviors(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setEmptyBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` emptyBehavior: movingrange_enums.EmptyBehavior `
    ///
    pub fn SetEmptyBehavior(self: KTextEditor__MovingRange, emptyBehavior: i32) void {
        qtc.KTextEditor__MovingRange_SetEmptyBehavior(@ptrCast(self.ptr), @bitCast(emptyBehavior));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#emptyBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ## Returns:
    ///
    /// ` movingrange_enums.EmptyBehavior `
    ///
    pub fn EmptyBehavior(self: KTextEditor__MovingRange) i32 {
        return qtc.KTextEditor__MovingRange_EmptyBehavior(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn Document(self: KTextEditor__MovingRange) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__MovingRange_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn SetRange(self: KTextEditor__MovingRange, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        qtc.KTextEditor__MovingRange_SetRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn Start(self: KTextEditor__MovingRange) KTextEditor__MovingCursor {
        return .{ .ptr = qtc.KTextEditor__MovingRange_Start(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn End(self: KTextEditor__MovingRange) KTextEditor__MovingCursor {
        return .{ .ptr = qtc.KTextEditor__MovingRange_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn View(self: KTextEditor__MovingRange) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__MovingRange_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SetView(self: KTextEditor__MovingRange, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRange_SetView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#attributeOnlyForViews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn AttributeOnlyForViews(self: KTextEditor__MovingRange) bool {
        return qtc.KTextEditor__MovingRange_AttributeOnlyForViews(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setAttributeOnlyForViews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` onlyForViews: bool `
    ///
    pub fn SetAttributeOnlyForViews(self: KTextEditor__MovingRange, onlyForViews: bool) void {
        qtc.KTextEditor__MovingRange_SetAttributeOnlyForViews(@ptrCast(self.ptr), onlyForViews);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#feedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn Feedback(self: KTextEditor__MovingRange) KTextEditor__MovingRangeFeedback {
        return .{ .ptr = qtc.KTextEditor__MovingRange_Feedback(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` feedback: KTextEditor__MovingRangeFeedback `
    ///
    pub fn SetFeedback(self: KTextEditor__MovingRange, feedback: anytype) void {
        comptime _ = @TypeOf(feedback)._is_KTextEditor__MovingRangeFeedback;
        qtc.KTextEditor__MovingRange_SetFeedback(@ptrCast(self.ptr), @ptrCast(feedback.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#zDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn ZDepth(self: KTextEditor__MovingRange) f64 {
        return qtc.KTextEditor__MovingRange_ZDepth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setZDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` zDepth: f64 `
    ///
    pub fn SetZDepth(self: KTextEditor__MovingRange, zDepth: f64) void {
        qtc.KTextEditor__MovingRange_SetZDepth(@ptrCast(self.ptr), @bitCast(zDepth));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` start: KTextEditor__Cursor `
    ///
    /// ` end: KTextEditor__Cursor `
    ///
    pub fn SetRange4(self: KTextEditor__MovingRange, start: anytype, end: anytype) void {
        comptime _ = @TypeOf(start)._is_KTextEditor__Cursor;
        comptime _ = @TypeOf(end)._is_KTextEditor__Cursor;
        qtc.KTextEditor__MovingRange_SetRange4(@ptrCast(self.ptr), @ptrCast(start.ptr), @ptrCast(end.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn ToRange(self: KTextEditor__MovingRange) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__MovingRange_ToRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toLineRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn ToLineRange(self: KTextEditor__MovingRange) KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__MovingRange_ToLineRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn IsEmpty(self: KTextEditor__MovingRange) bool {
        return qtc.KTextEditor__MovingRange_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn Contains(self: KTextEditor__MovingRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__MovingRange_Contains(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn Contains2(self: KTextEditor__MovingRange, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__MovingRange_Contains2(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` line: i32 `
    ///
    pub fn ContainsLine(self: KTextEditor__MovingRange, line: i32) bool {
        return qtc.KTextEditor__MovingRange_ContainsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` column: i32 `
    ///
    pub fn ContainsColumn(self: KTextEditor__MovingRange, column: i32) bool {
        return qtc.KTextEditor__MovingRange_ContainsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn Overlaps(self: KTextEditor__MovingRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__MovingRange_Overlaps(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` line: i32 `
    ///
    pub fn OverlapsLine(self: KTextEditor__MovingRange, line: i32) bool {
        return qtc.KTextEditor__MovingRange_OverlapsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` column: i32 `
    ///
    pub fn OverlapsColumn(self: KTextEditor__MovingRange, column: i32) bool {
        return qtc.KTextEditor__MovingRange_OverlapsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn OnSingleLine(self: KTextEditor__MovingRange) bool {
        return qtc.KTextEditor__MovingRange_OnSingleLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn NumberOfLines(self: KTextEditor__MovingRange) i32 {
        return qtc.KTextEditor__MovingRange_NumberOfLines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn Delete(self: KTextEditor__MovingRange) void {
        qtc.KTextEditor__MovingRange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/movingrange.html#public-types)
pub const enums = struct {
    pub const InsertBehavior = enum(i32) {
        pub const DoNotExpand: i32 = 0;
        pub const ExpandLeft: i32 = 1;
        pub const ExpandRight: i32 = 2;
    };

    pub const EmptyBehavior = enum(i32) {
        pub const AllowEmpty: i32 = 0;
        pub const InvalidateIfEmpty: i32 = 1;
    };
};
