const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/terminalinterface.html)
pub const TerminalInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TerminalInterface,

    pub const _is_TerminalInterface = {};

    /// ### DEPRECATED: Use `startProgram` instead
    ///
    pub const StartProgram = startProgram;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#startProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn startProgram(self: TerminalInterface, allocator: std.mem.Allocator, program: []const u8, args: []const []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("TerminalInterface.startProgram: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.TerminalInterface_StartProgram(@ptrCast(self.ptr), program_str, args_list);
    }

    /// ### DEPRECATED: Use `showShellInDir` instead
    ///
    pub const ShowShellInDir = showShellInDir;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#showShellInDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn showShellInDir(self: TerminalInterface, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.TerminalInterface_ShowShellInDir(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `sendInput` instead
    ///
    pub const SendInput = sendInput;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#sendInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` text: []const u8 `
    ///
    pub fn sendInput(self: TerminalInterface, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TerminalInterface_SendInput(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `terminalProcessId` instead
    ///
    pub const TerminalProcessId = terminalProcessId;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#terminalProcessId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    pub fn terminalProcessId(self: TerminalInterface) i32 {
        return qtc.TerminalInterface_TerminalProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foregroundProcessId` instead
    ///
    pub const ForegroundProcessId = foregroundProcessId;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#foregroundProcessId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    pub fn foregroundProcessId(self: TerminalInterface) i32 {
        return qtc.TerminalInterface_ForegroundProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foregroundProcessName` instead
    ///
    pub const ForegroundProcessName = foregroundProcessName;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#foregroundProcessName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn foregroundProcessName(self: TerminalInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TerminalInterface_ForegroundProcessName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TerminalInterface.foregroundProcessName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentWorkingDirectory` instead
    ///
    pub const CurrentWorkingDirectory = currentWorkingDirectory;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#currentWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentWorkingDirectory(self: TerminalInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TerminalInterface_CurrentWorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TerminalInterface.currentWorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableProfiles` instead
    ///
    pub const AvailableProfiles = availableProfiles;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#availableProfiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableProfiles(self: TerminalInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TerminalInterface_AvailableProfiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TerminalInterface.availableProfiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TerminalInterface.availableProfiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `currentProfileName` instead
    ///
    pub const CurrentProfileName = currentProfileName;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#currentProfileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentProfileName(self: TerminalInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TerminalInterface_CurrentProfileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TerminalInterface.currentProfileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCurrentProfile` instead
    ///
    pub const SetCurrentProfile = setCurrentProfile;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#setCurrentProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` profileName: []const u8 `
    ///
    pub fn setCurrentProfile(self: TerminalInterface, profileName: []const u8) bool {
        const profileName_str = qtc.libqt_string{
            .len = profileName.len,
            .data = profileName.ptr,
        };
        return qtc.TerminalInterface_SetCurrentProfile(@ptrCast(self.ptr), profileName_str);
    }

    /// ### DEPRECATED: Use `profileProperty` instead
    ///
    pub const ProfileProperty = profileProperty;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#profileProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` _profileProperty: []const u8 `
    ///
    pub fn profileProperty(self: TerminalInterface, _profileProperty: []const u8) QVariant {
        const profileProperty_str = qtc.libqt_string{
            .len = _profileProperty.len,
            .data = _profileProperty.ptr,
        };
        return .{ .ptr = qtc.TerminalInterface_ProfileProperty(@ptrCast(self.ptr), profileProperty_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` param1: TerminalInterface `
    ///
    pub fn operatorAssign(self: TerminalInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TerminalInterface;
        qtc.TerminalInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#dtor.TerminalInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TerminalInterface `
    ///
    pub fn delete(self: TerminalInterface) void {
        qtc.TerminalInterface_Delete(@ptrCast(self.ptr));
    }
};
