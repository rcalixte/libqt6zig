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
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldBeShownTwoActions` instead
    ///
    pub const QBaseShouldBeShownTwoActions = SuperShouldBeShownTwoActions;

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
    pub fn SuperShouldBeShownTwoActions(self: ?*anyopaque, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_SuperShouldBeShownTwoActions(@ptrCast(self), dontShowAgainName_str, @ptrCast(result));
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
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldBeShownContinue` instead
    ///
    pub const QBaseShouldBeShownContinue = SuperShouldBeShownContinue;

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
    pub fn SuperShouldBeShownContinue(self: ?*anyopaque, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_SuperShouldBeShownContinue(@ptrCast(self), dontShowAgainName_str);
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
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions(@ptrCast(self), dontShowAgainName_str, @bitCast(result));
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
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveDontShowAgainTwoActions` instead
    ///
    pub const QBaseSaveDontShowAgainTwoActions = SuperSaveDontShowAgainTwoActions;

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
    pub fn SuperSaveDontShowAgainTwoActions(self: ?*anyopaque, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainTwoActions(@ptrCast(self), dontShowAgainName_str, @bitCast(result));
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
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveDontShowAgainContinue` instead
    ///
    pub const QBaseSaveDontShowAgainContinue = SuperSaveDontShowAgainContinue;

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
    pub fn SuperSaveDontShowAgainContinue(self: ?*anyopaque, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainContinue(@ptrCast(self), dontShowAgainName_str);
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
        qtc.KMessageBoxDontAskAgainInterface_OnEnableAllMessages(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnableAllMessages` instead
    ///
    pub const QBaseEnableAllMessages = SuperEnableAllMessages;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    pub fn SuperEnableAllMessages(self: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_SuperEnableAllMessages(@ptrCast(self));
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
        qtc.KMessageBoxDontAskAgainInterface_OnEnableMessage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnableMessage` instead
    ///
    pub const QBaseEnableMessage = SuperEnableMessage;

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
    pub fn SuperEnableMessage(self: ?*anyopaque, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperEnableMessage(@ptrCast(self), dontShowAgainName_str);
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
        qtc.KMessageBoxDontAskAgainInterface_OnSetConfig(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetConfig` instead
    ///
    pub const QBaseSetConfig = SuperSetConfig;

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
    pub fn SuperSetConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_SuperSetConfig(@ptrCast(self), @ptrCast(config));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#dtor.KMessageBoxDontAskAgainInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KMessageBoxDontAskAgainInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KMessageBoxDontAskAgainInterface_Delete(@ptrCast(self));
    }
};
