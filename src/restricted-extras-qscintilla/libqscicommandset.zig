const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSettings = @import("libqt6").QSettings;
const QsciCommand = @import("libqt6").QsciCommand;
const qscicommand_enums = @import("libqscicommand.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
pub const QsciCommandSet = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciCommandSet,

    pub const _is_QsciCommandSet = {};

    /// ### DEPRECATED: Use `readSettings` instead
    ///
    pub const ReadSettings = readSettings;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` qs: QSettings `
    ///
    pub fn readSettings(self: QsciCommandSet, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciCommandSet_ReadSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### DEPRECATED: Use `writeSettings` instead
    ///
    pub const WriteSettings = writeSettings;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` qs: QSettings `
    ///
    pub fn writeSettings(self: QsciCommandSet, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciCommandSet_WriteSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### DEPRECATED: Use `commands` instead
    ///
    pub const Commands = commands;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn commands(self: QsciCommandSet, allocator: std.mem.Allocator) []QsciCommand {
        const _arr: qtc.libqt_list = qtc.QsciCommandSet_Commands(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QsciCommand, _arr.len) catch @panic("QsciCommandSet.commands: Memory allocation failed");
        const _data_val: [*]QtC.QsciCommand = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clearKeys` instead
    ///
    pub const ClearKeys = clearKeys;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    pub fn clearKeys(self: QsciCommandSet) void {
        qtc.QsciCommandSet_ClearKeys(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearAlternateKeys` instead
    ///
    pub const ClearAlternateKeys = clearAlternateKeys;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    pub fn clearAlternateKeys(self: QsciCommandSet) void {
        qtc.QsciCommandSet_ClearAlternateKeys(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `boundTo` instead
    ///
    pub const BoundTo = boundTo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` key: i32 `
    ///
    pub fn boundTo(self: QsciCommandSet, key: i32) QsciCommand {
        return .{ .ptr = qtc.QsciCommandSet_BoundTo(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` command: qscicommand_enums.Command `
    ///
    pub fn find(self: QsciCommandSet, command: i32) QsciCommand {
        return .{ .ptr = qtc.QsciCommandSet_Find(@ptrCast(self.ptr), @bitCast(command)) };
    }

    /// ### DEPRECATED: Use `readSettings2` instead
    ///
    pub const ReadSettings2 = readSettings2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn readSettings2(self: QsciCommandSet, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciCommandSet_ReadSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
    }

    /// ### DEPRECATED: Use `writeSettings2` instead
    ///
    pub const WriteSettings2 = writeSettings2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn writeSettings2(self: QsciCommandSet, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciCommandSet_WriteSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
    }
};
