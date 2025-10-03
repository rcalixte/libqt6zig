const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/ktexteditor-sessionconfiginterface.html
pub const ktexteditor__sessionconfiginterface = struct {
    /// New constructs a new KTextEditor::SessionConfigInterface object.
    ///
    ///
    pub fn New() QtC.KTextEditor__SessionConfigInterface {
        return qtc.KTextEditor__SessionConfigInterface_new();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup ```
    pub fn ReadSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_ReadSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface, callback: *const fn (self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnReadSessionConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnReadSessionConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup ```
    pub fn QBaseReadSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_QBaseReadSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup ```
    pub fn WriteSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_WriteSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface, callback: *const fn (self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnWriteSessionConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__SessionConfigInterface_OnWriteSessionConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface, config: QtC.KConfigGroup ```
    pub fn QBaseWriteSessionConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_QBaseWriteSessionConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__SessionConfigInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__SessionConfigInterface_Delete(@ptrCast(self));
    }
};
