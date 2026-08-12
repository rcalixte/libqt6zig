const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html)
pub const KTextEditor__SessionConfigInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__SessionConfigInterface,

    pub const _is_KTextEditor__SessionConfigInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::SessionConfigInterface object in C++ memory
    ///
    pub fn new() KTextEditor__SessionConfigInterface {
        return .{ .ptr = qtc.KTextEditor__SessionConfigInterface_new() };
    }

    /// ### DEPRECATED: Use `readSessionConfig` instead
    ///
    pub const ReadSessionConfig = readSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn readSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_ReadSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `onReadSessionConfig` instead
    ///
    pub const OnReadSessionConfig = onReadSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__SessionConfigInterface, config: KConfigGroup) callconv(.c) void `
    ///
    pub fn onReadSessionConfig(self: KTextEditor__SessionConfigInterface, callback: *const fn (KTextEditor__SessionConfigInterface, KConfigGroup) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnReadSessionConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadSessionConfig` instead
    ///
    pub const SuperReadSessionConfig = superReadSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn superReadSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_SuperReadSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `writeSessionConfig` instead
    ///
    pub const WriteSessionConfig = writeSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn writeSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_WriteSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteSessionConfig` instead
    ///
    pub const OnWriteSessionConfig = onWriteSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` callback: *const fn (self: KTextEditor__SessionConfigInterface, config: KConfigGroup) callconv(.c) void `
    ///
    pub fn onWriteSessionConfig(self: KTextEditor__SessionConfigInterface, callback: *const fn (KTextEditor__SessionConfigInterface, KConfigGroup) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnWriteSessionConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteSessionConfig` instead
    ///
    pub const SuperWriteSessionConfig = superWriteSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn superWriteSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_SuperWriteSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    pub fn delete(self: KTextEditor__SessionConfigInterface) void {
        qtc.KTextEditor__SessionConfigInterface_Delete(@ptrCast(self.ptr));
    }
};
