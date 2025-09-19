const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfind_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kfind.html
pub const kfind = struct {
    /// New constructs a new KFind object.
    ///
    /// ``` pattern: []const u8, options: i64, parent: QtC.QWidget ```
    pub fn New(pattern: []const u8, options: i64, parent: ?*anyopaque) QtC.KFind {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.KFind_new(pattern_str, @intCast(options), @ptrCast(parent));
    }

    /// New2 constructs a new KFind object.
    ///
    /// ``` pattern: []const u8, options: i64, parent: QtC.QWidget, findDialog: QtC.QWidget ```
    pub fn New2(pattern: []const u8, options: i64, parent: ?*anyopaque, findDialog: ?*anyopaque) QtC.KFind {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.KFind_new2(pattern_str, @intCast(options), @ptrCast(parent), @ptrCast(findDialog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KFind ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KFind_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KFind, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFind_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KFind, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KFind_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KFind_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KFind_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KFind_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#needData)
    ///
    /// ``` self: QtC.KFind ```
    pub fn NeedData(self: ?*anyopaque) bool {
        return qtc.KFind_NeedData(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KFind, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KFind, id: i32, data: []const u8 ```
    pub fn SetData2(self: ?*anyopaque, id: i32, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData2(@ptrCast(self), @intCast(id), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#find)
    ///
    /// ``` self: QtC.KFind ```
    ///
    /// Returns: ``` kfind_enums.Result ```
    pub fn Find(self: ?*anyopaque) i32 {
        return qtc.KFind_Find(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#options)
    ///
    /// ``` self: QtC.KFind ```
    pub fn Options(self: ?*anyopaque) i64 {
        return qtc.KFind_Options(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setOptions)
    ///
    /// ``` self: QtC.KFind, options: i64 ```
    pub fn SetOptions(self: ?*anyopaque, options: i64) void {
        qtc.KFind_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, options: i64) callconv(.c) void ```
    pub fn OnSetOptions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.KFind_OnSetOptions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind, options: i64 ```
    pub fn QBaseSetOptions(self: ?*anyopaque, options: i64) void {
        qtc.KFind_QBaseSetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#pattern)
    ///
    /// ``` self: QtC.KFind, allocator: std.mem.Allocator ```
    pub fn Pattern(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFind_Pattern(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setPattern)
    ///
    /// ``` self: QtC.KFind, pattern: []const u8 ```
    pub fn SetPattern(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KFind_SetPattern(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#numMatches)
    ///
    /// ``` self: QtC.KFind ```
    pub fn NumMatches(self: ?*anyopaque) i32 {
        return qtc.KFind_NumMatches(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// ``` self: QtC.KFind ```
    pub fn ResetCounts(self: ?*anyopaque) void {
        qtc.KFind_ResetCounts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn () callconv(.c) void ```
    pub fn OnResetCounts(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFind_OnResetCounts(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind ```
    pub fn QBaseResetCounts(self: ?*anyopaque) void {
        qtc.KFind_QBaseResetCounts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// ``` self: QtC.KFind, text: []const u8, index: i32, matchedlength: i32 ```
    pub fn ValidateMatch(self: ?*anyopaque, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFind_ValidateMatch(@ptrCast(self), text_str, @intCast(index), @intCast(matchedlength));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, text: [*:0]const u8, index: i32, matchedlength: i32) callconv(.c) bool ```
    pub fn OnValidateMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, i32) callconv(.c) bool) void {
        qtc.KFind_OnValidateMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind, text: []const u8, index: i32, matchedlength: i32 ```
    pub fn QBaseValidateMatch(self: ?*anyopaque, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFind_QBaseValidateMatch(@ptrCast(self), text_str, @intCast(index), @intCast(matchedlength));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#shouldRestart)
    ///
    /// ``` self: QtC.KFind, forceAsking: bool, showNumMatches: bool ```
    pub fn ShouldRestart(self: ?*anyopaque, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KFind_ShouldRestart(@ptrCast(self), forceAsking, showNumMatches);
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#shouldRestart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, forceAsking: bool, showNumMatches: bool) callconv(.c) bool ```
    pub fn OnShouldRestart(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, bool) callconv(.c) bool) void {
        qtc.KFind_OnShouldRestart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#shouldRestart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind, forceAsking: bool, showNumMatches: bool ```
    pub fn QBaseShouldRestart(self: ?*anyopaque, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KFind_QBaseShouldRestart(@ptrCast(self), forceAsking, showNumMatches);
    }

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

    /// [Qt documentation](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// ``` self: QtC.KFind ```
    pub fn DisplayFinalDialog(self: ?*anyopaque) void {
        qtc.KFind_DisplayFinalDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn () callconv(.c) void ```
    pub fn OnDisplayFinalDialog(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFind_OnDisplayFinalDialog(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind ```
    pub fn QBaseDisplayFinalDialog(self: ?*anyopaque) void {
        qtc.KFind_QBaseDisplayFinalDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ``` self: QtC.KFind ```
    pub fn FindNextDialog(self: ?*anyopaque) QtC.QDialog {
        return qtc.KFind_FindNextDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#closeFindNextDialog)
    ///
    /// ``` self: QtC.KFind ```
    pub fn CloseFindNextDialog(self: ?*anyopaque) void {
        qtc.KFind_CloseFindNextDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#index)
    ///
    /// ``` self: QtC.KFind ```
    pub fn Index(self: ?*anyopaque) i32 {
        return qtc.KFind_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#textFound)
    ///
    /// ``` self: QtC.KFind, text: []const u8, matchingIndex: i32, matchedLength: i32 ```
    pub fn TextFound(self: ?*anyopaque, text: []const u8, matchingIndex: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFind_TextFound(@ptrCast(self), text_str, @intCast(matchingIndex), @intCast(matchedLength));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#textFound)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, text: [*:0]const u8, matchingIndex: i32, matchedLength: i32) callconv(.c) void ```
    pub fn OnTextFound(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFound(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ``` self: QtC.KFind, id: i32, matchingIndex: i32, matchedLength: i32 ```
    pub fn TextFoundAtId(self: ?*anyopaque, id: i32, matchingIndex: i32, matchedLength: i32) void {
        qtc.KFind_TextFoundAtId(@ptrCast(self), @intCast(id), @intCast(matchingIndex), @intCast(matchedLength));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, id: i32, matchingIndex: i32, matchedLength: i32) callconv(.c) void ```
    pub fn OnTextFoundAtId(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFoundAtId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#findNext)
    ///
    /// ``` self: QtC.KFind ```
    pub fn FindNext(self: ?*anyopaque) void {
        qtc.KFind_FindNext(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#findNext)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind) callconv(.c) void ```
    pub fn OnFindNext(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFind_Connect_FindNext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ``` self: QtC.KFind ```
    pub fn OptionsChanged(self: ?*anyopaque) void {
        qtc.KFind_OptionsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind) callconv(.c) void ```
    pub fn OnOptionsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFind_Connect_OptionsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ``` self: QtC.KFind ```
    pub fn DialogClosed(self: ?*anyopaque) void {
        qtc.KFind_DialogClosed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind) callconv(.c) void ```
    pub fn OnDialogClosed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFind_Connect_DialogClosed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// ``` self: QtC.KFind ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KFind_ParentWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn () callconv(.c) QtC.QWidget ```
    pub fn OnParentWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.KFind_OnParentWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind ```
    pub fn QBaseParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KFind_QBaseParentWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// ``` self: QtC.KFind ```
    pub fn DialogsParent(self: ?*anyopaque) QtC.QWidget {
        return qtc.KFind_DialogsParent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KFind, callback: *const fn () callconv(.c) QtC.QWidget ```
    pub fn OnDialogsParent(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.KFind_OnDialogsParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KFind ```
    pub fn QBaseDialogsParent(self: ?*anyopaque) QtC.QWidget {
        return qtc.KFind_QBaseDialogsParent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KFind_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KFind_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KFind, data: []const u8, startPos: i32 ```
    pub fn SetData22(self: ?*anyopaque, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData22(@ptrCast(self), data_str, @intCast(startPos));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#setData)
    ///
    /// ``` self: QtC.KFind, id: i32, data: []const u8, startPos: i32 ```
    pub fn SetData3(self: ?*anyopaque, id: i32, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData3(@ptrCast(self), @intCast(id), data_str, @intCast(startPos));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ``` self: QtC.KFind, create: bool ```
    pub fn FindNextDialog1(self: ?*anyopaque, create: bool) QtC.QDialog {
        return qtc.KFind_FindNextDialog1(@ptrCast(self), create);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KFind, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KFind, name: []const u8 ```
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
    /// ``` self: QtC.KFind ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KFind ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KFind ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KFind ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KFind, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KFind ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KFind, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KFind, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KFind, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KFind, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KFind, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kfind.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KFind, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KFind, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KFind, obj: QtC.QObject ```
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
    /// ``` self: QtC.KFind, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KFind ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KFind ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KFind, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KFind, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KFind, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kfind.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfind.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KFind ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KFind ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KFind ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KFind ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KFind, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KFind ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KFind, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KFind, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KFind, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KFind, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFind_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFind_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFind_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFind_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFind_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFind_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFind_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFind_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFind_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFind_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFind_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFind_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFind_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFind_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFind_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFind_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFind_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFind_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFind_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFind_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFind_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KFind_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KFind_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KFind_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KFind_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KFind_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFind_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFind_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFind_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFind_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KFind_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KFind_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFind_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KFind, callback: *const fn (self: QtC.KFind, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kfind.html#dtor.KFind)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFind ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFind_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kfind.html#types
pub const enums = struct {
    pub const Options = enum {
        pub const WholeWordsOnly: i32 = 1;
        pub const FromCursor: i32 = 2;
        pub const SelectedText: i32 = 4;
        pub const CaseSensitive: i32 = 8;
        pub const FindBackwards: i32 = 16;
        pub const RegularExpression: i32 = 32;
        pub const FindIncremental: i32 = 64;
        pub const MinimumUserOption: i32 = 65536;
    };

    pub const Result = enum {
        pub const NoMatch: i32 = 0;
        pub const Match: i32 = 1;
    };
};
