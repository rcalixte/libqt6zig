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

    /// New constructs a new KTextEditor::SessionConfigInterface object.
    ///
    pub fn New() KTextEditor__SessionConfigInterface {
        return .{ .ptr = qtc.KTextEditor__SessionConfigInterface_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn ReadSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_ReadSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadSessionConfig(self: KTextEditor__SessionConfigInterface, callback: *const fn (KTextEditor__SessionConfigInterface, KConfigGroup) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnReadSessionConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadSessionConfig` instead
    ///
    pub const QBaseReadSessionConfig = SuperReadSessionConfig;

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
    pub fn SuperReadSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_SuperReadSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn WriteSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_WriteSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteSessionConfig(self: KTextEditor__SessionConfigInterface, callback: *const fn (KTextEditor__SessionConfigInterface, KConfigGroup) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnWriteSessionConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteSessionConfig` instead
    ///
    pub const QBaseWriteSessionConfig = SuperWriteSessionConfig;

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
    pub fn SuperWriteSessionConfig(self: KTextEditor__SessionConfigInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KTextEditor__SessionConfigInterface_SuperWriteSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__SessionConfigInterface `
    ///
    pub fn Delete(self: KTextEditor__SessionConfigInterface) void {
        qtc.KTextEditor__SessionConfigInterface_Delete(@ptrCast(self.ptr));
    }
};
