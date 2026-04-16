const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const kmessagebox_enums = @import("libkmessagebox.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html)
pub const KMessageBoxDontAskAgainInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMessageBoxDontAskAgainInterface,

    pub const _is_KMessageBoxDontAskAgainInterface = {};

    /// New constructs a new KMessageBoxDontAskAgainInterface object.
    ///
    pub fn New() KMessageBoxDontAskAgainInterface {
        return .{ .ptr = qtc.KMessageBoxDontAskAgainInterface_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: *kmessagebox_enums.ButtonCode `
    ///
    pub fn ShouldBeShownTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @ptrCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8, result: *kmessagebox_enums.ButtonCode) callconv(.c) bool `
    ///
    pub fn OnShouldBeShownTwoActions(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8, *i32) callconv(.c) bool) void {
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: *kmessagebox_enums.ButtonCode `
    ///
    pub fn SuperShouldBeShownTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_SuperShouldBeShownTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @ptrCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn ShouldBeShownContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_ShouldBeShownContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnShouldBeShownContinue(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8) callconv(.c) bool) void {
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn SuperShouldBeShownContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_SuperShouldBeShownContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: kmessagebox_enums.ButtonCode `
    ///
    pub fn SaveDontShowAgainTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @bitCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8, result: kmessagebox_enums.ButtonCode) callconv(.c) void `
    ///
    pub fn OnSaveDontShowAgainTwoActions(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: kmessagebox_enums.ButtonCode `
    ///
    pub fn SuperSaveDontShowAgainTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @bitCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn SaveDontShowAgainContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSaveDontShowAgainContinue(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn SuperSaveDontShowAgainContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    pub fn EnableAllMessages(self: KMessageBoxDontAskAgainInterface) void {
        qtc.KMessageBoxDontAskAgainInterface_EnableAllMessages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEnableAllMessages(self: KMessageBoxDontAskAgainInterface, callback: *const fn () callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnEnableAllMessages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    pub fn SuperEnableAllMessages(self: KMessageBoxDontAskAgainInterface) void {
        qtc.KMessageBoxDontAskAgainInterface_SuperEnableAllMessages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn EnableMessage(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_EnableMessage(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxDontAskAgainInterface, dontShowAgainName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnableMessage(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnEnableMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn SuperEnableMessage(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperEnableMessage(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` config: KConfig `
    ///
    pub fn SetConfig(self: KMessageBoxDontAskAgainInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KMessageBoxDontAskAgainInterface_SetConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxDontAskAgainInterface, config: KConfig) callconv(.c) void `
    ///
    pub fn OnSetConfig(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, KConfig) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSetConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperSetConfig(self: KMessageBoxDontAskAgainInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KMessageBoxDontAskAgainInterface_SuperSetConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` param1: KMessageBoxDontAskAgainInterface `
    ///
    pub fn OperatorAssign(self: KMessageBoxDontAskAgainInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KMessageBoxDontAskAgainInterface;
        qtc.KMessageBoxDontAskAgainInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    pub fn Delete(self: KMessageBoxDontAskAgainInterface) void {
        qtc.KMessageBoxDontAskAgainInterface_Delete(@ptrCast(self.ptr));
    }
};
