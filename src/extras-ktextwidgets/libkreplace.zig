const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfind_enums = @import("libkfind.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kreplace.html
pub const kreplace = struct {
    /// New constructs a new KReplace object.
    ///
    /// ``` pattern: []const u8, replacement: []const u8, options: i64 ```
    pub fn New(pattern: []const u8, replacement: []const u8, options: i64) QtC.KReplace {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };

        return qtc.KReplace_new(pattern_str, replacement_str, @intCast(options));
    }

    /// New2 constructs a new KReplace object.
    ///
    /// ``` pattern: []const u8, replacement: []const u8, options: i64, parent: QtC.QWidget, replaceDialog: QtC.QWidget ```
    pub fn New2(pattern: []const u8, replacement: []const u8, options: i64, parent: ?*anyopaque, replaceDialog: ?*anyopaque) QtC.KReplace {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };

        return qtc.KReplace_new2(pattern_str, replacement_str, @intCast(options), @ptrCast(parent), @ptrCast(replaceDialog));
    }

    /// New3 constructs a new KReplace object.
    ///
    /// ``` pattern: []const u8, replacement: []const u8, options: i64, parent: QtC.QWidget ```
    pub fn New3(pattern: []const u8, replacement: []const u8, options: i64, parent: ?*anyopaque) QtC.KReplace {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };

        return qtc.KReplace_new3(pattern_str, replacement_str, @intCast(options), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KReplace_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KReplace, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KReplace_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KReplace, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KReplace_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KReplace_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KReplace, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KReplace_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KReplace_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#numReplacements)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn NumReplacements(self: ?*anyopaque) i32 {
        return qtc.KReplace_NumReplacements(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#resetCounts)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn ResetCounts(self: ?*anyopaque) void {
        qtc.KReplace_ResetCounts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#resetCounts)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KReplace, slot: fn () callconv(.c) void ```
    pub fn OnResetCounts(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KReplace_OnResetCounts(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#resetCounts)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QBaseResetCounts(self: ?*anyopaque) void {
        qtc.KReplace_QBaseResetCounts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#replace)
    ///
    /// ``` self: QtC.KReplace ```
    ///
    /// Returns: ``` kfind_enums.Result ```
    pub fn Replace(self: ?*anyopaque) i32 {
        return qtc.KReplace_Replace(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#replaceNextDialog)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn ReplaceNextDialog(self: ?*anyopaque) QtC.QDialog {
        return qtc.KReplace_ReplaceNextDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#closeReplaceNextDialog)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn CloseReplaceNextDialog(self: ?*anyopaque) void {
        qtc.KReplace_CloseReplaceNextDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#replace)
    ///
    /// ``` text: []const u8, pattern: []const u8, replacement: []const u8, index: i32, options: i64, replacedLength: *i32 ```
    pub fn Replace2(text: []const u8, pattern: []const u8, replacement: []const u8, index: i32, options: i64, replacedLength: *i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        return qtc.KReplace_Replace2(text_str, pattern_str, replacement_str, @intCast(index), @intCast(options), @ptrCast(replacedLength));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#shouldRestart)
    ///
    /// ``` self: QtC.KReplace, forceAsking: bool, showNumMatches: bool ```
    pub fn ShouldRestart(self: ?*anyopaque, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KReplace_ShouldRestart(@ptrCast(self), forceAsking, showNumMatches);
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#shouldRestart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, forceAsking: bool, showNumMatches: bool) callconv(.c) bool ```
    pub fn OnShouldRestart(self: ?*anyopaque, slot: fn (?*anyopaque, bool, bool) callconv(.c) bool) void {
        qtc.KReplace_OnShouldRestart(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#shouldRestart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KReplace, forceAsking: bool, showNumMatches: bool ```
    pub fn QBaseShouldRestart(self: ?*anyopaque, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KReplace_QBaseShouldRestart(@ptrCast(self), forceAsking, showNumMatches);
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#displayFinalDialog)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn DisplayFinalDialog(self: ?*anyopaque) void {
        qtc.KReplace_DisplayFinalDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#displayFinalDialog)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KReplace, slot: fn () callconv(.c) void ```
    pub fn OnDisplayFinalDialog(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KReplace_OnDisplayFinalDialog(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#displayFinalDialog)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QBaseDisplayFinalDialog(self: ?*anyopaque) void {
        qtc.KReplace_QBaseDisplayFinalDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#textReplaced)
    ///
    /// ``` self: QtC.KReplace, text: []const u8, replacementIndex: i32, replacedLength: i32, matchedLength: i32 ```
    pub fn TextReplaced(self: ?*anyopaque, text: []const u8, replacementIndex: i32, replacedLength: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KReplace_TextReplaced(@ptrCast(self), text_str, @intCast(replacementIndex), @intCast(replacedLength), @intCast(matchedLength));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#textReplaced)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, text: [*:0]const u8, replacementIndex: i32, replacedLength: i32, matchedLength: i32) callconv(.c) void ```
    pub fn OnTextReplaced(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32, i32, i32) callconv(.c) void) void {
        qtc.KReplace_Connect_TextReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KReplace_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KReplace_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#replaceNextDialog)
    ///
    /// ``` self: QtC.KReplace, create: bool ```
    pub fn ReplaceNextDialog1(self: ?*anyopaque, create: bool) QtC.QDialog {
        return qtc.KReplace_ReplaceNextDialog1(@ptrCast(self), create);
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#needData)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn NeedData(self: ?*anyopaque) bool {
        return qtc.KFind_NeedData(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KReplace, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KReplace, id: i32, data: []const u8 ```
    pub fn SetData2(self: ?*anyopaque, id: i32, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData2(@ptrCast(self), @intCast(id), data_str);
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#find)
    ///
    /// ``` self: QtC.KReplace ```
    ///
    /// Returns: ``` kfind_enums.Result ```
    pub fn Find(self: ?*anyopaque) i32 {
        return qtc.KFind_Find(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#options)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn Options(self: ?*anyopaque) i64 {
        return qtc.KFind_Options(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#pattern)
    ///
    /// ``` self: QtC.KReplace, allocator: std.mem.Allocator ```
    pub fn Pattern(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFind_Pattern(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setPattern)
    ///
    /// ``` self: QtC.KReplace, pattern: []const u8 ```
    pub fn SetPattern(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KFind_SetPattern(@ptrCast(self), pattern_str);
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#numMatches)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn NumMatches(self: ?*anyopaque) i32 {
        return qtc.KFind_NumMatches(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#find)
    ///
    /// ``` text: []const u8, pattern: []const u8, index: i32, options: i64, matchedLength: *i32, rmatch: QtC.QRegularExpressionMatch ```
    pub fn Find2(text: []const u8, pattern: []const u8, index: i32, options: i64, matchedLength: *i32, rmatch: ?*anyopaque) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return qtc.KFind_Find2(text_str, pattern_str, @intCast(index), @intCast(options), @ptrCast(matchedLength), @ptrCast(rmatch));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn FindNextDialog(self: ?*anyopaque) QtC.QDialog {
        return qtc.KFind_FindNextDialog(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#closeFindNextDialog)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn CloseFindNextDialog(self: ?*anyopaque) void {
        qtc.KFind_CloseFindNextDialog(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#index)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn Index(self: ?*anyopaque) i32 {
        return qtc.KFind_Index(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#textFound)
    ///
    /// ``` self: QtC.KReplace, text: []const u8, matchingIndex: i32, matchedLength: i32 ```
    pub fn TextFound(self: ?*anyopaque, text: []const u8, matchingIndex: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFind_TextFound(@ptrCast(self), text_str, @intCast(matchingIndex), @intCast(matchedLength));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#textFound)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, text: [*:0]const u8, matchingIndex: i32, matchedLength: i32) callconv(.c) void ```
    pub fn OnTextFound(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFound(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ``` self: QtC.KReplace, id: i32, matchingIndex: i32, matchedLength: i32 ```
    pub fn TextFoundAtId(self: ?*anyopaque, id: i32, matchingIndex: i32, matchedLength: i32) void {
        qtc.KFind_TextFoundAtId(@ptrCast(self), @intCast(id), @intCast(matchingIndex), @intCast(matchedLength));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, id: i32, matchingIndex: i32, matchedLength: i32) callconv(.c) void ```
    pub fn OnTextFoundAtId(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFoundAtId(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#findNext)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn FindNext(self: ?*anyopaque) void {
        qtc.KFind_FindNext(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#findNext)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace) callconv(.c) void ```
    pub fn OnFindNext(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFind_Connect_FindNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn OptionsChanged(self: ?*anyopaque) void {
        qtc.KFind_OptionsChanged(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace) callconv(.c) void ```
    pub fn OnOptionsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFind_Connect_OptionsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn DialogClosed(self: ?*anyopaque) void {
        qtc.KFind_DialogClosed(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace) callconv(.c) void ```
    pub fn OnDialogClosed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFind_Connect_DialogClosed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KReplace, data: []const u8, startPos: i32 ```
    pub fn SetData22(self: ?*anyopaque, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData22(@ptrCast(self), data_str, @intCast(startPos));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KReplace, id: i32, data: []const u8, startPos: i32 ```
    pub fn SetData3(self: ?*anyopaque, id: i32, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData3(@ptrCast(self), @intCast(id), data_str, @intCast(startPos));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ``` self: QtC.KReplace, create: bool ```
    pub fn FindNextDialog1(self: ?*anyopaque, create: bool) QtC.QDialog {
        return qtc.KFind_FindNextDialog1(@ptrCast(self), create);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KReplace, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KReplace, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KReplace, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KReplace, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KReplace, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KReplace, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KReplace, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KReplace, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kreplace.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KReplace, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KReplace, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KReplace, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KReplace, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KReplace, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KReplace, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KReplace, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kreplace.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kreplace.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KReplace, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KReplace ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KReplace, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KReplace, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KReplace, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KReplace, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, options: i64 ```
    pub fn SetOptions(self: ?*anyopaque, options: i64) void {
        qtc.KReplace_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, options: i64 ```
    pub fn QBaseSetOptions(self: ?*anyopaque, options: i64) void {
        qtc.KReplace_QBaseSetOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, options: i64) callconv(.c) void ```
    pub fn OnSetOptions(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.KReplace_OnSetOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, text: []const u8, index: i32, matchedlength: i32 ```
    pub fn ValidateMatch(self: ?*anyopaque, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KReplace_ValidateMatch(@ptrCast(self), text_str, @intCast(index), @intCast(matchedlength));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, text: []const u8, index: i32, matchedlength: i32 ```
    pub fn QBaseValidateMatch(self: ?*anyopaque, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KReplace_QBaseValidateMatch(@ptrCast(self), text_str, @intCast(index), @intCast(matchedlength));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, text: [*:0]const u8, index: i32, matchedlength: i32) callconv(.c) bool ```
    pub fn OnValidateMatch(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32, i32) callconv(.c) bool) void {
        qtc.KReplace_OnValidateMatch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KReplace_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KReplace_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KReplace_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KReplace_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KReplace_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KReplace_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KReplace_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KReplace_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KReplace_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KReplace_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KReplace_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KReplace_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KReplace_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KReplace_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KReplace_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KReplace_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KReplace_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KReplace_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KReplace_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KReplace_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KReplace_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KReplace_ParentWidget(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QBaseParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KReplace_QBaseParentWidget(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnParentWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.KReplace_OnParentWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn DialogsParent(self: ?*anyopaque) QtC.QWidget {
        return qtc.KReplace_DialogsParent(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QBaseDialogsParent(self: ?*anyopaque) QtC.QWidget {
        return qtc.KReplace_QBaseDialogsParent(@ptrCast(self));
    }

    /// Inherited from KFind
    ///
    /// [Qt documentation](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnDialogsParent(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.KReplace_OnDialogsParent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KReplace_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KReplace_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KReplace_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KReplace_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KReplace_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KReplace_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KReplace_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KReplace_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KReplace_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KReplace_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KReplace_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KReplace_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KReplace, slot: fn (self: QtC.KReplace, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kreplace.html#dtor.KReplace)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KReplace ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KReplace_Delete(@ptrCast(self));
    }
};
