const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const movingrange_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html)
pub const ktexteditor__movingrange = struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setInsertBehaviors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` insertBehaviors: flag of movingrange_enums.InsertBehavior `
    ///
    pub fn SetInsertBehaviors(self: ?*anyopaque, insertBehaviors: i32) void {
        qtc.KTextEditor__MovingRange_SetInsertBehaviors(@ptrCast(self), @intCast(insertBehaviors));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#insertBehaviors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ## Returns:
    ///
    /// ` flag of movingrange_enums.InsertBehavior `
    ///
    pub fn InsertBehaviors(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingRange_InsertBehaviors(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setEmptyBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` emptyBehavior: movingrange_enums.EmptyBehavior `
    ///
    pub fn SetEmptyBehavior(self: ?*anyopaque, emptyBehavior: i32) void {
        qtc.KTextEditor__MovingRange_SetEmptyBehavior(@ptrCast(self), @intCast(emptyBehavior));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#emptyBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ## Returns:
    ///
    /// ` movingrange_enums.EmptyBehavior `
    ///
    pub fn EmptyBehavior(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingRange_EmptyBehavior(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn Document(self: ?*anyopaque) QtC.KTextEditor__Document {
        return qtc.KTextEditor__MovingRange_Document(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    pub fn SetRange(self: ?*anyopaque, range: QtC.KTextEditor__Range) void {
        qtc.KTextEditor__MovingRange_SetRange(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn Start(self: ?*anyopaque) QtC.KTextEditor__MovingCursor {
        return qtc.KTextEditor__MovingRange_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn End(self: ?*anyopaque) QtC.KTextEditor__MovingCursor {
        return qtc.KTextEditor__MovingRange_End(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn View(self: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__MovingRange_View(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn SetView(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MovingRange_SetView(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#attributeOnlyForViews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn AttributeOnlyForViews(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingRange_AttributeOnlyForViews(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setAttributeOnlyForViews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` onlyForViews: bool `
    ///
    pub fn SetAttributeOnlyForViews(self: ?*anyopaque, onlyForViews: bool) void {
        qtc.KTextEditor__MovingRange_SetAttributeOnlyForViews(@ptrCast(self), onlyForViews);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#feedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn Feedback(self: ?*anyopaque) QtC.KTextEditor__MovingRangeFeedback {
        return qtc.KTextEditor__MovingRange_Feedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` feedback: QtC.KTextEditor__MovingRangeFeedback `
    ///
    pub fn SetFeedback(self: ?*anyopaque, feedback: ?*anyopaque) void {
        qtc.KTextEditor__MovingRange_SetFeedback(@ptrCast(self), @ptrCast(feedback));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#zDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn ZDepth(self: ?*anyopaque) f64 {
        return qtc.KTextEditor__MovingRange_ZDepth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setZDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` zDepth: f64 `
    ///
    pub fn SetZDepth(self: ?*anyopaque, zDepth: f64) void {
        qtc.KTextEditor__MovingRange_SetZDepth(@ptrCast(self), @floatCast(zDepth));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` start: QtC.KTextEditor__Cursor `
    ///
    /// ` end: QtC.KTextEditor__Cursor `
    ///
    pub fn SetRange4(self: ?*anyopaque, start: QtC.KTextEditor__Cursor, end: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__MovingRange_SetRange4(@ptrCast(self), @ptrCast(start), @ptrCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn ToRange(self: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__MovingRange_ToRange(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toLineRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn ToLineRange(self: ?*anyopaque) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__MovingRange_ToLineRange(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingRange_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    pub fn Contains(self: ?*anyopaque, range: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingRange_Contains(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` cursor: QtC.KTextEditor__Cursor `
    ///
    pub fn Contains2(self: ?*anyopaque, cursor: QtC.KTextEditor__Cursor) bool {
        return qtc.KTextEditor__MovingRange_Contains2(@ptrCast(self), @ptrCast(cursor));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` line: i32 `
    ///
    pub fn ContainsLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__MovingRange_ContainsLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` column: i32 `
    ///
    pub fn ContainsColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.KTextEditor__MovingRange_ContainsColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    pub fn Overlaps(self: ?*anyopaque, range: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingRange_Overlaps(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` line: i32 `
    ///
    pub fn OverlapsLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__MovingRange_OverlapsLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    /// ` column: i32 `
    ///
    pub fn OverlapsColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.KTextEditor__MovingRange_OverlapsColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn OnSingleLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingRange_OnSingleLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn NumberOfLines(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingRange_NumberOfLines(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__MovingRange `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__MovingRange_Delete(@ptrCast(self));
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
