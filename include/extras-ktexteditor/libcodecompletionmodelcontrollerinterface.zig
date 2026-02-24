const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const codecompletionmodelcontrollerinterface_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html)
pub const ktexteditor__codecompletionmodelcontrollerinterface = struct {
    /// New constructs a new KTextEditor::CodeCompletionModelControllerInterface object.
    ///
    pub fn New() QtC.KTextEditor__CodeCompletionModelControllerInterface {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_new();
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` insertedText: []const u8 `
    ///
    /// ` userInsertion: bool `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn ShouldStartCompletion(self: ?*anyopaque, view: ?*anyopaque, insertedText: []const u8, userInsertion: bool, position: ?*anyopaque) bool {
        const insertedText_str = qtc.libqt_string{
            .len = insertedText.len,
            .data = insertedText.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion(@ptrCast(self), @ptrCast(view), insertedText_str, userInsertion, @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, insertedText: [*:0]const u8, userInsertion: bool, position: QtC.KTextEditor__Cursor) callconv(.c) bool `
    ///
    pub fn OnShouldStartCompletion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, bool, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldStartCompletion(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` insertedText: []const u8 `
    ///
    /// ` userInsertion: bool `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn SuperShouldStartCompletion(self: ?*anyopaque, view: ?*anyopaque, insertedText: []const u8, userInsertion: bool, position: ?*anyopaque) bool {
        const insertedText_str = qtc.libqt_string{
            .len = insertedText.len,
            .data = insertedText.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldStartCompletion(@ptrCast(self), @ptrCast(view), insertedText_str, userInsertion, @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn CompletionRange(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_CompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor) callconv(.c) QtC.KTextEditor__Range `
    ///
    pub fn OnCompletionRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KTextEditor__Range) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnCompletionRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn SuperCompletionRange(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperCompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    pub fn UpdateCompletionRange(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range) callconv(.c) QtC.KTextEditor__Range `
    ///
    pub fn OnUpdateCompletionRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KTextEditor__Range) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnUpdateCompletionRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    pub fn SuperUpdateCompletionRange(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperUpdateCompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilterString(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__CodeCompletionModelControllerInterface_FilterString(@ptrCast(self), @ptrCast(view), @ptrCast(range), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__codecompletionmodelcontrollerinterface.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, position: QtC.KTextEditor__Cursor) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFilterString(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnFilterString(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperFilterString(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperFilterString(@ptrCast(self), @ptrCast(view), @ptrCast(range), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__codecompletionmodelcontrollerinterface.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    /// ` currentCompletion: []const u8 `
    ///
    pub fn ShouldAbortCompletion(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, currentCompletion: []const u8) bool {
        const currentCompletion_str = qtc.libqt_string{
            .len = currentCompletion.len,
            .data = currentCompletion.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion(@ptrCast(self), @ptrCast(view), @ptrCast(range), currentCompletion_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, currentCompletion: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnShouldAbortCompletion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldAbortCompletion(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` range: QtC.KTextEditor__Range `
    ///
    /// ` currentCompletion: []const u8 `
    ///
    pub fn SuperShouldAbortCompletion(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, currentCompletion: []const u8) bool {
        const currentCompletion_str = qtc.libqt_string{
            .len = currentCompletion.len,
            .data = currentCompletion.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldAbortCompletion(@ptrCast(self), @ptrCast(view), @ptrCast(range), currentCompletion_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` selected: QtC.QModelIndex `
    ///
    /// ` inserted: QtC.QChar `
    ///
    pub fn ShouldExecute(self: ?*anyopaque, selected: ?*anyopaque, inserted: QtC.QChar) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute(@ptrCast(self), @ptrCast(selected), @ptrCast(inserted));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, selected: QtC.QModelIndex, inserted: QtC.QChar) callconv(.c) bool `
    ///
    pub fn OnShouldExecute(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QChar) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldExecute(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` selected: QtC.QModelIndex `
    ///
    /// ` inserted: QtC.QChar `
    ///
    pub fn SuperShouldExecute(self: ?*anyopaque, selected: ?*anyopaque, inserted: QtC.QChar) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldExecute(@ptrCast(self), @ptrCast(selected), @ptrCast(inserted));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn Aborted(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_Aborted(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnAborted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnAborted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn SuperAborted(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperAborted(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` matched: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` codecompletionmodelcontrollerinterface_enums.MatchReaction `
    ///
    pub fn MatchingItem(self: ?*anyopaque, matched: ?*anyopaque) i32 {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_MatchingItem(@ptrCast(self), @ptrCast(matched));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, matched: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnMatchingItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnMatchingItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` matched: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` codecompletionmodelcontrollerinterface_enums.MatchReaction `
    ///
    pub fn SuperMatchingItem(self: ?*anyopaque, matched: ?*anyopaque) i32 {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperMatchingItem(@ptrCast(self), @ptrCast(matched));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn ShouldHideItemsWithEqualNames(self: ?*anyopaque) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnShouldHideItemsWithEqualNames(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldHideItemsWithEqualNames(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn SuperShouldHideItemsWithEqualNames(self: ?*anyopaque) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_SuperShouldHideItemsWithEqualNames(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    /// ` param1: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__CodeCompletionModelControllerInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_Delete(@ptrCast(self));
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
