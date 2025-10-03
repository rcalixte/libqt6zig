const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/terminalinterface.html
pub const terminalinterface = struct {
    /// [Qt documentation](https://api.kde.org/terminalinterface.html#startProgram)
    ///
    /// ``` self: QtC.TerminalInterface, program: []const u8, args: [][]const u8, allocator: std.mem.Allocator ```
    pub fn StartProgram(self: ?*anyopaque, program: []const u8, args: [][]const u8, allocator: std.mem.Allocator) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("terminalinterface.StartProgram: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.TerminalInterface_StartProgram(@ptrCast(self), program_str, args_list);
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#showShellInDir)
    ///
    /// ``` self: QtC.TerminalInterface, dir: []const u8 ```
    pub fn ShowShellInDir(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.TerminalInterface_ShowShellInDir(@ptrCast(self), dir_str);
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#sendInput)
    ///
    /// ``` self: QtC.TerminalInterface, text: []const u8 ```
    pub fn SendInput(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TerminalInterface_SendInput(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#terminalProcessId)
    ///
    /// ``` self: QtC.TerminalInterface ```
    pub fn TerminalProcessId(self: ?*anyopaque) i32 {
        return qtc.TerminalInterface_TerminalProcessId(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#foregroundProcessId)
    ///
    /// ``` self: QtC.TerminalInterface ```
    pub fn ForegroundProcessId(self: ?*anyopaque) i32 {
        return qtc.TerminalInterface_ForegroundProcessId(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#foregroundProcessName)
    ///
    /// ``` self: QtC.TerminalInterface, allocator: std.mem.Allocator ```
    pub fn ForegroundProcessName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.TerminalInterface_ForegroundProcessName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("terminalinterface.ForegroundProcessName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#currentWorkingDirectory)
    ///
    /// ``` self: QtC.TerminalInterface, allocator: std.mem.Allocator ```
    pub fn CurrentWorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.TerminalInterface_CurrentWorkingDirectory(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("terminalinterface.CurrentWorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#availableProfiles)
    ///
    /// ``` self: QtC.TerminalInterface, allocator: std.mem.Allocator ```
    pub fn AvailableProfiles(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.TerminalInterface_AvailableProfiles(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("terminalinterface.AvailableProfiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("terminalinterface.AvailableProfiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#currentProfileName)
    ///
    /// ``` self: QtC.TerminalInterface, allocator: std.mem.Allocator ```
    pub fn CurrentProfileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.TerminalInterface_CurrentProfileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("terminalinterface.CurrentProfileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#setCurrentProfile)
    ///
    /// ``` self: QtC.TerminalInterface, profileName: []const u8 ```
    pub fn SetCurrentProfile(self: ?*anyopaque, profileName: []const u8) bool {
        const profileName_str = qtc.libqt_string{
            .len = profileName.len,
            .data = profileName.ptr,
        };
        return qtc.TerminalInterface_SetCurrentProfile(@ptrCast(self), profileName_str);
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#profileProperty)
    ///
    /// ``` self: QtC.TerminalInterface, profileProperty: []const u8 ```
    pub fn ProfileProperty(self: ?*anyopaque, profileProperty: []const u8) QtC.QVariant {
        const profileProperty_str = qtc.libqt_string{
            .len = profileProperty.len,
            .data = profileProperty.ptr,
        };
        return qtc.TerminalInterface_ProfileProperty(@ptrCast(self), profileProperty_str);
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#operator-eq)
    ///
    /// ``` self: QtC.TerminalInterface, param1: QtC.TerminalInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.TerminalInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/terminalinterface.html#dtor.TerminalInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.TerminalInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.TerminalInterface_Delete(@ptrCast(self));
    }
};
