const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__Range = @import("libqt6").KTextEditor__Range;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const QChar = @import("libqt6").QChar;
const QModelIndex = @import("libqt6").QModelIndex;
const codecompletionmodelcontrollerinterface_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html)
pub const KTextEditor__CodeCompletionModelControllerInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__CodeCompletionModelControllerInterface,

    pub const _is_KTextEditor__CodeCompletionModelControllerInterface = {};

    /// New constructs a new KTextEditor::CodeCompletionModelControllerInterface object.
    ///
    pub fn New() KTextEditor__CodeCompletionModelControllerInterface {
        return .{ .ptr = qtc.KTextEditor__CodeCompletionModelControllerInterface_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` insertedText: []const u8 `
    ///
    /// ` userInsertion: bool `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn ShouldStartCompletion(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, insertedText: []const u8, userInsertion: bool, position: anytype) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const insertedText_str = qtc.libqt_string{
            .len = insertedText.len,
            .data = insertedText.ptr,
        };
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion(@ptrCast(self.ptr), @ptrCast(view.ptr), insertedText_str, userInsertion, @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, view: KTextEditor__View, insertedText: [*:0]const u8, userInsertion: bool, position: KTextEditor__Cursor) callconv(.c) bool `
    ///
    pub fn OnShouldStartCompletion(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, KTextEditor__View, [*:0]const u8, bool, KTextEditor__Cursor) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldStartCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldStartCompletion` instead
    ///
    pub const QBaseShouldStartCompletion = SuperShouldStartCompletion;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` insertedText: []const u8 `
    ///
    /// ` userInsertion: bool `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SuperShouldStartCompletion(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, insertedText: []const u8, userInsertion: bool, position: anytype) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const insertedText_str = qtc.libqt_string{
            .len = insertedText.len,
            .data = insertedText.ptr,
        };
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldStartCompletion(@ptrCast(self.ptr), @ptrCast(view.ptr), insertedText_str, userInsertion, @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn CompletionRange(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, position: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__CodeCompletionModelControllerInterface_CompletionRange(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, view: KTextEditor__View, position: KTextEditor__Cursor) callconv(.c) KTextEditor__Range `
    ///
    pub fn OnCompletionRange(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, KTextEditor__View, KTextEditor__Cursor) callconv(.c) KTextEditor__Range) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnCompletionRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCompletionRange` instead
    ///
    pub const QBaseCompletionRange = SuperCompletionRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SuperCompletionRange(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, position: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperCompletionRange(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn UpdateCompletionRange(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, range: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(range.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, view: KTextEditor__View, range: KTextEditor__Range) callconv(.c) KTextEditor__Range `
    ///
    pub fn OnUpdateCompletionRange(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, KTextEditor__View, KTextEditor__Range) callconv(.c) KTextEditor__Range) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnUpdateCompletionRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCompletionRange` instead
    ///
    pub const QBaseUpdateCompletionRange = SuperUpdateCompletionRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn SuperUpdateCompletionRange(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, range: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperUpdateCompletionRange(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(range.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn FilterString(self: KTextEditor__CodeCompletionModelControllerInterface, allocator: std.mem.Allocator, view: anytype, range: anytype, position: anytype) []const u8 {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__CodeCompletionModelControllerInterface_FilterString(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(range.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__codecompletionmodelcontrollerinterface.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, view: KTextEditor__View, range: KTextEditor__Range, position: KTextEditor__Cursor) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFilterString(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, KTextEditor__View, KTextEditor__Range, KTextEditor__Cursor) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnFilterString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFilterString` instead
    ///
    pub const QBaseFilterString = SuperFilterString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SuperFilterString(self: KTextEditor__CodeCompletionModelControllerInterface, allocator: std.mem.Allocator, view: anytype, range: anytype, position: anytype) []const u8 {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperFilterString(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(range.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__codecompletionmodelcontrollerinterface.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` currentCompletion: []const u8 `
    ///
    pub fn ShouldAbortCompletion(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, range: anytype, currentCompletion: []const u8) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const currentCompletion_str = qtc.libqt_string{
            .len = currentCompletion.len,
            .data = currentCompletion.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(range.ptr), currentCompletion_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, view: KTextEditor__View, range: KTextEditor__Range, currentCompletion: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnShouldAbortCompletion(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, KTextEditor__View, KTextEditor__Range, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldAbortCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldAbortCompletion` instead
    ///
    pub const QBaseShouldAbortCompletion = SuperShouldAbortCompletion;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` currentCompletion: []const u8 `
    ///
    pub fn SuperShouldAbortCompletion(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype, range: anytype, currentCompletion: []const u8) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const currentCompletion_str = qtc.libqt_string{
            .len = currentCompletion.len,
            .data = currentCompletion.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldAbortCompletion(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(range.ptr), currentCompletion_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` selected: QModelIndex `
    ///
    /// ` inserted: QChar `
    ///
    pub fn ShouldExecute(self: KTextEditor__CodeCompletionModelControllerInterface, selected: anytype, inserted: anytype) bool {
        comptime _ = @TypeOf(selected)._is_QModelIndex;
        comptime _ = @TypeOf(inserted)._is_QChar;
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(inserted.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, selected: QModelIndex, inserted: QChar) callconv(.c) bool `
    ///
    pub fn OnShouldExecute(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, QModelIndex, QChar) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldExecute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldExecute` instead
    ///
    pub const QBaseShouldExecute = SuperShouldExecute;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` selected: QModelIndex `
    ///
    /// ` inserted: QChar `
    ///
    pub fn SuperShouldExecute(self: KTextEditor__CodeCompletionModelControllerInterface, selected: anytype, inserted: anytype) bool {
        comptime _ = @TypeOf(selected)._is_QModelIndex;
        comptime _ = @TypeOf(inserted)._is_QChar;
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldExecute(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(inserted.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn Aborted(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__CodeCompletionModelControllerInterface_Aborted(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnAborted(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnAborted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAborted` instead
    ///
    pub const QBaseAborted = SuperAborted;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SuperAborted(self: KTextEditor__CodeCompletionModelControllerInterface, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperAborted(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` matched: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` codecompletionmodelcontrollerinterface_enums.MatchReaction `
    ///
    pub fn MatchingItem(self: KTextEditor__CodeCompletionModelControllerInterface, matched: anytype) i32 {
        comptime _ = @TypeOf(matched)._is_QModelIndex;
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_MatchingItem(@ptrCast(self.ptr), @ptrCast(matched.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__CodeCompletionModelControllerInterface, matched: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnMatchingItem(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (KTextEditor__CodeCompletionModelControllerInterface, QModelIndex) callconv(.c) i32) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnMatchingItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMatchingItem` instead
    ///
    pub const QBaseMatchingItem = SuperMatchingItem;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` matched: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` codecompletionmodelcontrollerinterface_enums.MatchReaction `
    ///
    pub fn SuperMatchingItem(self: KTextEditor__CodeCompletionModelControllerInterface, matched: anytype) i32 {
        comptime _ = @TypeOf(matched)._is_QModelIndex;
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperMatchingItem(@ptrCast(self.ptr), @ptrCast(matched.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn ShouldHideItemsWithEqualNames(self: KTextEditor__CodeCompletionModelControllerInterface) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnShouldHideItemsWithEqualNames(self: KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldHideItemsWithEqualNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldHideItemsWithEqualNames` instead
    ///
    pub const QBaseShouldHideItemsWithEqualNames = SuperShouldHideItemsWithEqualNames;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn SuperShouldHideItemsWithEqualNames(self: KTextEditor__CodeCompletionModelControllerInterface) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldHideItemsWithEqualNames(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` param1: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn OperatorAssign(self: KTextEditor__CodeCompletionModelControllerInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KTextEditor__CodeCompletionModelControllerInterface;
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn Delete(self: KTextEditor__CodeCompletionModelControllerInterface) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/codecompletionmodelcontrollerinterface.html#public-types)
pub const enums = struct {
    pub const MatchReaction = enum(i32) {
        pub const None: i32 = 0;
        pub const HideListIfAutomaticInvocation: i32 = 1;
        pub const ForExtension: i32 = 65535;
    };
};
