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

    /// ### DEPRECATED: Use `setInsertBehaviors` instead
    ///
    pub const SetInsertBehaviors = setInsertBehaviors;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setInsertBehaviors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` _insertBehaviors: flag of movingrange_enums.InsertBehavior `
    ///
    pub fn setInsertBehaviors(self: KTextEditor__MovingRange, _insertBehaviors: i32) void {
        qtc.KTextEditor__MovingRange_SetInsertBehaviors(@ptrCast(self.ptr), @bitCast(_insertBehaviors));
    }

    /// ### DEPRECATED: Use `insertBehaviors` instead
    ///
    pub const InsertBehaviors = insertBehaviors;

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
    pub fn insertBehaviors(self: KTextEditor__MovingRange) i32 {
        return qtc.KTextEditor__MovingRange_InsertBehaviors(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEmptyBehavior` instead
    ///
    pub const SetEmptyBehavior = setEmptyBehavior;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setEmptyBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` _emptyBehavior: movingrange_enums.EmptyBehavior `
    ///
    pub fn setEmptyBehavior(self: KTextEditor__MovingRange, _emptyBehavior: i32) void {
        qtc.KTextEditor__MovingRange_SetEmptyBehavior(@ptrCast(self.ptr), @bitCast(_emptyBehavior));
    }

    /// ### DEPRECATED: Use `emptyBehavior` instead
    ///
    pub const EmptyBehavior = emptyBehavior;

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
    pub fn emptyBehavior(self: KTextEditor__MovingRange) i32 {
        return qtc.KTextEditor__MovingRange_EmptyBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn document(self: KTextEditor__MovingRange) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__MovingRange_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn setRange(self: KTextEditor__MovingRange, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        qtc.KTextEditor__MovingRange_SetRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn start(self: KTextEditor__MovingRange) KTextEditor__MovingCursor {
        return .{ .ptr = qtc.KTextEditor__MovingRange_Start(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn end(self: KTextEditor__MovingRange) KTextEditor__MovingCursor {
        return .{ .ptr = qtc.KTextEditor__MovingRange_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn view(self: KTextEditor__MovingRange) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__MovingRange_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setView` instead
    ///
    pub const SetView = setView;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` _view: KTextEditor__View `
    ///
    pub fn setView(self: KTextEditor__MovingRange, _view: anytype) void {
        comptime _ = @TypeOf(_view)._is_KTextEditor__View;
        qtc.KTextEditor__MovingRange_SetView(@ptrCast(self.ptr), @ptrCast(_view.ptr));
    }

    /// ### DEPRECATED: Use `attributeOnlyForViews` instead
    ///
    pub const AttributeOnlyForViews = attributeOnlyForViews;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#attributeOnlyForViews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn attributeOnlyForViews(self: KTextEditor__MovingRange) bool {
        return qtc.KTextEditor__MovingRange_AttributeOnlyForViews(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeOnlyForViews` instead
    ///
    pub const SetAttributeOnlyForViews = setAttributeOnlyForViews;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setAttributeOnlyForViews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` onlyForViews: bool `
    ///
    pub fn setAttributeOnlyForViews(self: KTextEditor__MovingRange, onlyForViews: bool) void {
        qtc.KTextEditor__MovingRange_SetAttributeOnlyForViews(@ptrCast(self.ptr), onlyForViews);
    }

    /// ### DEPRECATED: Use `feedback` instead
    ///
    pub const Feedback = feedback;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#feedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn feedback(self: KTextEditor__MovingRange) KTextEditor__MovingRangeFeedback {
        return .{ .ptr = qtc.KTextEditor__MovingRange_Feedback(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFeedback` instead
    ///
    pub const SetFeedback = setFeedback;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` _feedback: KTextEditor__MovingRangeFeedback `
    ///
    pub fn setFeedback(self: KTextEditor__MovingRange, _feedback: anytype) void {
        comptime _ = @TypeOf(_feedback)._is_KTextEditor__MovingRangeFeedback;
        qtc.KTextEditor__MovingRange_SetFeedback(@ptrCast(self.ptr), @ptrCast(_feedback.ptr));
    }

    /// ### DEPRECATED: Use `zDepth` instead
    ///
    pub const ZDepth = zDepth;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#zDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn zDepth(self: KTextEditor__MovingRange) f64 {
        return qtc.KTextEditor__MovingRange_ZDepth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZDepth` instead
    ///
    pub const SetZDepth = setZDepth;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setZDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` _zDepth: f64 `
    ///
    pub fn setZDepth(self: KTextEditor__MovingRange, _zDepth: f64) void {
        qtc.KTextEditor__MovingRange_SetZDepth(@ptrCast(self.ptr), @bitCast(_zDepth));
    }

    /// ### DEPRECATED: Use `setRange4` instead
    ///
    pub const SetRange4 = setRange4;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` _start: KTextEditor__Cursor `
    ///
    /// ` _end: KTextEditor__Cursor `
    ///
    pub fn setRange4(self: KTextEditor__MovingRange, _start: anytype, _end: anytype) void {
        comptime _ = @TypeOf(_start)._is_KTextEditor__Cursor;
        comptime _ = @TypeOf(_end)._is_KTextEditor__Cursor;
        qtc.KTextEditor__MovingRange_SetRange4(@ptrCast(self.ptr), @ptrCast(_start.ptr), @ptrCast(_end.ptr));
    }

    /// ### DEPRECATED: Use `toRange` instead
    ///
    pub const ToRange = toRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn toRange(self: KTextEditor__MovingRange) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__MovingRange_ToRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toLineRange` instead
    ///
    pub const ToLineRange = toLineRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toLineRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn toLineRange(self: KTextEditor__MovingRange) KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__MovingRange_ToLineRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn isEmpty(self: KTextEditor__MovingRange) bool {
        return qtc.KTextEditor__MovingRange_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn contains(self: KTextEditor__MovingRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__MovingRange_Contains(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn contains2(self: KTextEditor__MovingRange, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__MovingRange_Contains2(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `containsLine` instead
    ///
    pub const ContainsLine = containsLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` line: i32 `
    ///
    pub fn containsLine(self: KTextEditor__MovingRange, line: i32) bool {
        return qtc.KTextEditor__MovingRange_ContainsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `containsColumn` instead
    ///
    pub const ContainsColumn = containsColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` column: i32 `
    ///
    pub fn containsColumn(self: KTextEditor__MovingRange, column: i32) bool {
        return qtc.KTextEditor__MovingRange_ContainsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `overlaps` instead
    ///
    pub const Overlaps = overlaps;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn overlaps(self: KTextEditor__MovingRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__MovingRange_Overlaps(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `overlapsLine` instead
    ///
    pub const OverlapsLine = overlapsLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` line: i32 `
    ///
    pub fn overlapsLine(self: KTextEditor__MovingRange, line: i32) bool {
        return qtc.KTextEditor__MovingRange_OverlapsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `overlapsColumn` instead
    ///
    pub const OverlapsColumn = overlapsColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    /// ` column: i32 `
    ///
    pub fn overlapsColumn(self: KTextEditor__MovingRange, column: i32) bool {
        return qtc.KTextEditor__MovingRange_OverlapsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onSingleLine` instead
    ///
    pub const OnSingleLine = onSingleLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn onSingleLine(self: KTextEditor__MovingRange) bool {
        return qtc.KTextEditor__MovingRange_OnSingleLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `numberOfLines` instead
    ///
    pub const NumberOfLines = numberOfLines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn numberOfLines(self: KTextEditor__MovingRange) i32 {
        return qtc.KTextEditor__MovingRange_NumberOfLines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MovingRange `
    ///
    pub fn delete(self: KTextEditor__MovingRange) void {
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
