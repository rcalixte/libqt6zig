const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kmessagebox_enums = @import("libkmessagebox.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html)
pub const kmessageboxdontaskagaininterface = struct {
    /// New constructs a new KMessageBoxDontAskAgainInterface object.
    ///
    pub fn New() QtC.KMessageBoxDontAskAgainInterface {
        return qtc.KMessageBoxDontAskAgainInterface_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: *kmessagebox_enums.ButtonCode `
    ///
    pub fn ShouldBeShownTwoActions(self: ?*anyopaque, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions(@ptrCast(self), dontShowAgainName_str, @ptrCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: QtC.KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8, result: *kmessagebox_enums.ButtonCode) callconv(.c) bool `
    ///
    pub fn OnShouldBeShownTwoActions(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) bool) void {
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: *kmessagebox_enums.ButtonCode `
    ///
    pub fn QBaseShouldBeShownTwoActions(self: ?*anyopaque, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_QBaseShouldBeShownTwoActions(@ptrCast(self), dontShowAgainName_str, @ptrCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn ShouldBeShownContinue(self: ?*anyopaque, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_ShouldBeShownContinue(@ptrCast(self), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: QtC.KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnShouldBeShownContinue(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn QBaseShouldBeShownContinue(self: ?*anyopaque, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_QBaseShouldBeShownContinue(@ptrCast(self), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: kmessagebox_enums.ButtonCode `
    ///
    pub fn SaveDontShowAgainTwoActions(self: ?*anyopaque, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions(@ptrCast(self), dontShowAgainName_str, @intCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: QtC.KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8, result: kmessagebox_enums.ButtonCode) callconv(.c) void `
    ///
    pub fn OnSaveDontShowAgainTwoActions(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: kmessagebox_enums.ButtonCode `
    ///
    pub fn QBaseSaveDontShowAgainTwoActions(self: ?*anyopaque, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_QBaseSaveDontShowAgainTwoActions(@ptrCast(self), dontShowAgainName_str, @intCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn SaveDontShowAgainContinue(self: ?*anyopaque, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue(@ptrCast(self), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: QtC.KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSaveDontShowAgainContinue(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn QBaseSaveDontShowAgainContinue(self: ?*anyopaque, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_QBaseSaveDontShowAgainContinue(@ptrCast(self), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    pub fn EnableAllMessages(self: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_EnableAllMessages(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEnableAllMessages(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnEnableAllMessages(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    pub fn QBaseEnableAllMessages(self: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_QBaseEnableAllMessages(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn EnableMessage(self: ?*anyopaque, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_EnableMessage(@ptrCast(self), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: QtC.KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnableMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnEnableMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn QBaseEnableMessage(self: ?*anyopaque, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_QBaseEnableMessage(@ptrCast(self), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn SetConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_SetConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: QtC.KMessageBoxDontAskAgainInterface, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnSetConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSetConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseSetConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_QBaseSetConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    /// ` param1: QtC.KMessageBoxDontAskAgainInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#dtor.KMessageBoxDontAskAgainInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_Delete(@ptrCast(self));
    }
};
