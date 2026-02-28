const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html)
pub const ktexteditor__sessionconfiginterface = struct {
    /// New constructs a new KTextEditor::SessionConfigInterface object.
    ///
    pub fn New() QtC.KTextEditor__SessionConfigInterface {
        return qtc.KTextEditor__SessionConfigInterface_new();
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn ReadSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_ReadSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup) callconv(.c) void `
    ///
    pub fn OnReadSessionConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnReadSessionConfig(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn SuperReadSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_SuperReadSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn WriteSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_WriteSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup) callconv(.c) void `
    ///
    pub fn OnWriteSessionConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnWriteSessionConfig(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn SuperWriteSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_SuperWriteSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_Delete(@ptrCast(self));
    }
};
