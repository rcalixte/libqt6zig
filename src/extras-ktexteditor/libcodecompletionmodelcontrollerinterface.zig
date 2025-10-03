const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const codecompletionmodelcontrollerinterface_enums = enums;
const std = @import("std");

/// https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html
pub const ktexteditor__codecompletionmodelcontrollerinterface = struct {
    /// New constructs a new KTextEditor::CodeCompletionModelControllerInterface object.
    ///
    ///
    pub fn New() QtC.KTextEditor__CodeCompletionModelControllerInterface {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_new();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, insertedText: []const u8, userInsertion: bool, position: QtC.KTextEditor__Cursor ```
    pub fn ShouldStartCompletion(self: ?*anyopaque, view: ?*anyopaque, insertedText: []const u8, userInsertion: bool, position: ?*anyopaque) bool {
        const insertedText_str = qtc.libqt_string{
            .len = insertedText.len,
            .data = insertedText.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion(@ptrCast(self), @ptrCast(view), insertedText_str, userInsertion, @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, insertedText: [*:0]const u8, userInsertion: bool, position: QtC.KTextEditor__Cursor) callconv(.c) bool ```
    pub fn OnShouldStartCompletion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, bool, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldStartCompletion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, insertedText: []const u8, userInsertion: bool, position: QtC.KTextEditor__Cursor ```
    pub fn QBaseShouldStartCompletion(self: ?*anyopaque, view: ?*anyopaque, insertedText: []const u8, userInsertion: bool, position: ?*anyopaque) bool {
        const insertedText_str = qtc.libqt_string{
            .len = insertedText.len,
            .data = insertedText.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldStartCompletion(@ptrCast(self), @ptrCast(view), insertedText_str, userInsertion, @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor ```
    pub fn CompletionRange(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_CompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor) callconv(.c) QtC.KTextEditor__Range ```
    pub fn OnCompletionRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KTextEditor__Range) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnCompletionRange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor ```
    pub fn QBaseCompletionRange(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseCompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range ```
    pub fn UpdateCompletionRange(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range) callconv(.c) QtC.KTextEditor__Range ```
    pub fn OnUpdateCompletionRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KTextEditor__Range) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnUpdateCompletionRange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range ```
    pub fn QBaseUpdateCompletionRange(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseUpdateCompletionRange(@ptrCast(self), @ptrCast(view), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, position: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn FilterString(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__CodeCompletionModelControllerInterface_FilterString(@ptrCast(self), @ptrCast(view), @ptrCast(range), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::codecompletionmodelcontrollerinterface.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, position: QtC.KTextEditor__Cursor) callconv(.c) [*:0]const u8 ```
    pub fn OnFilterString(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnFilterString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, position: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn QBaseFilterString(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseFilterString(@ptrCast(self), @ptrCast(view), @ptrCast(range), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::codecompletionmodelcontrollerinterface.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, currentCompletion: []const u8 ```
    pub fn ShouldAbortCompletion(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, currentCompletion: []const u8) bool {
        const currentCompletion_str = qtc.libqt_string{
            .len = currentCompletion.len,
            .data = currentCompletion.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion(@ptrCast(self), @ptrCast(view), @ptrCast(range), currentCompletion_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, currentCompletion: [*:0]const u8) callconv(.c) bool ```
    pub fn OnShouldAbortCompletion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldAbortCompletion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View, range: QtC.KTextEditor__Range, currentCompletion: []const u8 ```
    pub fn QBaseShouldAbortCompletion(self: ?*anyopaque, view: ?*anyopaque, range: ?*anyopaque, currentCompletion: []const u8) bool {
        const currentCompletion_str = qtc.libqt_string{
            .len = currentCompletion.len,
            .data = currentCompletion.ptr,
        };
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldAbortCompletion(@ptrCast(self), @ptrCast(view), @ptrCast(range), currentCompletion_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, selected: QtC.QModelIndex, inserted: QtC.QChar ```
    pub fn ShouldExecute(self: ?*anyopaque, selected: ?*anyopaque, inserted: QtC.QChar) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute(@ptrCast(self), @ptrCast(selected), @ptrCast(inserted));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, selected: QtC.QModelIndex, inserted: QtC.QChar) callconv(.c) bool ```
    pub fn OnShouldExecute(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QChar) callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldExecute(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, selected: QtC.QModelIndex, inserted: QtC.QChar ```
    pub fn QBaseShouldExecute(self: ?*anyopaque, selected: ?*anyopaque, inserted: QtC.QChar) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldExecute(@ptrCast(self), @ptrCast(selected), @ptrCast(inserted));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View ```
    pub fn Aborted(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_Aborted(@ptrCast(self), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View) callconv(.c) void ```
    pub fn OnAborted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnAborted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, view: QtC.KTextEditor__View ```
    pub fn QBaseAborted(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseAborted(@ptrCast(self), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, matched: QtC.QModelIndex ```
    ///
    /// Returns: ``` codecompletionmodelcontrollerinterface_enums.MatchReaction ```
    pub fn MatchingItem(self: ?*anyopaque, matched: ?*anyopaque) i32 {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_MatchingItem(@ptrCast(self), @ptrCast(matched));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn (self: QtC.KTextEditor__CodeCompletionModelControllerInterface, matched: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnMatchingItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnMatchingItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, matched: QtC.QModelIndex ```
    ///
    /// Returns: ``` codecompletionmodelcontrollerinterface_enums.MatchReaction ```
    pub fn QBaseMatchingItem(self: ?*anyopaque, matched: ?*anyopaque) i32 {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseMatchingItem(@ptrCast(self), @ptrCast(matched));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface ```
    pub fn ShouldHideItemsWithEqualNames(self: ?*anyopaque) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, callback: *const fn () callconv(.c) bool ```
    pub fn OnShouldHideItemsWithEqualNames(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OnShouldHideItemsWithEqualNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface ```
    pub fn QBaseShouldHideItemsWithEqualNames(self: ?*anyopaque) bool {
        return qtc.KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldHideItemsWithEqualNames(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#operator-eq)
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface, param1: QtC.KTextEditor__CodeCompletionModelControllerInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__CodeCompletionModelControllerInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__CodeCompletionModelControllerInterface_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/codecompletionmodelcontrollerinterface.html#types
pub const enums = struct {
    pub const MatchReaction = enum {
        pub const None: i32 = 0;
        pub const HideListIfAutomaticInvocation: i32 = 1;
        pub const ForExtension: i32 = 65535;
    };
};
