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

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` qs: QSettings `
    ///
    pub fn ReadSettings(self: QsciCommandSet, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciCommandSet_ReadSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` qs: QSettings `
    ///
    pub fn WriteSettings(self: QsciCommandSet, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciCommandSet_WriteSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Commands(self: QsciCommandSet, allocator: std.mem.Allocator) []QsciCommand {
        const _arr: qtc.libqt_list = qtc.QsciCommandSet_Commands(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QsciCommand, _arr.len) catch @panic("qscicommandset.Commands: Memory allocation failed");
        const _data: [*]QtC.QsciCommand = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    pub fn ClearKeys(self: QsciCommandSet) void {
        qtc.QsciCommandSet_ClearKeys(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    pub fn ClearAlternateKeys(self: QsciCommandSet) void {
        qtc.QsciCommandSet_ClearAlternateKeys(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` key: i32 `
    ///
    pub fn BoundTo(self: QsciCommandSet, key: i32) QsciCommand {
        return .{ .ptr = qtc.QsciCommandSet_BoundTo(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciCommandSet `
    ///
    /// ` command: qscicommand_enums.Command `
    ///
    pub fn Find(self: QsciCommandSet, command: i32) QsciCommand {
        return .{ .ptr = qtc.QsciCommandSet_Find(@ptrCast(self.ptr), @bitCast(command)) };
    }

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
    pub fn ReadSettings2(self: QsciCommandSet, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciCommandSet_ReadSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
    }

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
    pub fn WriteSettings2(self: QsciCommandSet, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciCommandSet_WriteSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
    }
};
