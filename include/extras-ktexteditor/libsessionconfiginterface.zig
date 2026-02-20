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
    pub fn QBaseReadSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_QBaseReadSessionConfig(@ptrCast(self), @ptrCast(config));
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
    pub fn QBaseWriteSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_QBaseWriteSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__SessionConfigInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_Delete(@ptrCast(self));
    }
};
