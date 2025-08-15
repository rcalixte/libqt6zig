const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qscicommand_enums = @import("libqscicommand.zig").enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html
pub const qscicommandset = struct {
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, qs: QtC.QSettings ```
    pub fn ReadSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return qtc.QsciCommandSet_ReadSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, qs: QtC.QSettings ```
    pub fn WriteSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return qtc.QsciCommandSet_WriteSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, allocator: std.mem.Allocator ```
    pub fn Commands(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QsciCommand {
        const _arr: qtc.libqt_list = qtc.QsciCommandSet_Commands(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QsciCommand, _arr.len) catch @panic("qscicommandset.Commands: Memory allocation failed");
        const _data: [*]QtC.QsciCommand = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet ```
    pub fn ClearKeys(self: ?*anyopaque) void {
        qtc.QsciCommandSet_ClearKeys(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet ```
    pub fn ClearAlternateKeys(self: ?*anyopaque) void {
        qtc.QsciCommandSet_ClearAlternateKeys(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, key: i32 ```
    pub fn BoundTo(self: ?*anyopaque, key: i32) QtC.QsciCommand {
        return qtc.QsciCommandSet_BoundTo(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, command: qscicommand_enums.Command ```
    pub fn Find(self: ?*anyopaque, command: i64) QtC.QsciCommand {
        return qtc.QsciCommandSet_Find(@ptrCast(self), @intCast(command));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn ReadSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciCommandSet_ReadSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
    ///
    /// ``` self: QtC.QsciCommandSet, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn WriteSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciCommandSet_WriteSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }
};
