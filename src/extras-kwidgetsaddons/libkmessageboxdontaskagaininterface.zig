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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KMessageBoxDontAskAgainInterface object in C++ memory
    ///
    pub fn new() KMessageBoxDontAskAgainInterface {
        return .{ .ptr = qtc.KMessageBoxDontAskAgainInterface_new() };
    }

    /// ### DEPRECATED: Use `shouldBeShownTwoActions` instead
    ///
    pub const ShouldBeShownTwoActions = shouldBeShownTwoActions;

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
    pub fn shouldBeShownTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onShouldBeShownTwoActions` instead
    ///
    pub const OnShouldBeShownTwoActions = onShouldBeShownTwoActions;

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
    pub fn onShouldBeShownTwoActions(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8, *i32) callconv(.c) bool) void {
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShouldBeShownTwoActions` instead
    ///
    pub const SuperShouldBeShownTwoActions = superShouldBeShownTwoActions;

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
    pub fn superShouldBeShownTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_SuperShouldBeShownTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @ptrCast(result));
    }

    /// ### DEPRECATED: Use `shouldBeShownContinue` instead
    ///
    pub const ShouldBeShownContinue = shouldBeShownContinue;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn shouldBeShownContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_ShouldBeShownContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `onShouldBeShownContinue` instead
    ///
    pub const OnShouldBeShownContinue = onShouldBeShownContinue;

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
    pub fn onShouldBeShownContinue(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8) callconv(.c) bool) void {
        qtc.KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShouldBeShownContinue` instead
    ///
    pub const SuperShouldBeShownContinue = superShouldBeShownContinue;

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
    pub fn superShouldBeShownContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBoxDontAskAgainInterface_SuperShouldBeShownContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `saveDontShowAgainTwoActions` instead
    ///
    pub const SaveDontShowAgainTwoActions = saveDontShowAgainTwoActions;

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
    pub fn saveDontShowAgainTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @bitCast(result));
    }

    /// ### DEPRECATED: Use `onSaveDontShowAgainTwoActions` instead
    ///
    pub const OnSaveDontShowAgainTwoActions = onSaveDontShowAgainTwoActions;

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
    pub fn onSaveDontShowAgainTwoActions(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveDontShowAgainTwoActions` instead
    ///
    pub const SuperSaveDontShowAgainTwoActions = superSaveDontShowAgainTwoActions;

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
    pub fn superSaveDontShowAgainTwoActions(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainTwoActions(@ptrCast(self.ptr), dontShowAgainName_str, @bitCast(result));
    }

    /// ### DEPRECATED: Use `saveDontShowAgainContinue` instead
    ///
    pub const SaveDontShowAgainContinue = saveDontShowAgainContinue;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn saveDontShowAgainContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `onSaveDontShowAgainContinue` instead
    ///
    pub const OnSaveDontShowAgainContinue = onSaveDontShowAgainContinue;

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
    pub fn onSaveDontShowAgainContinue(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveDontShowAgainContinue` instead
    ///
    pub const SuperSaveDontShowAgainContinue = superSaveDontShowAgainContinue;

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
    pub fn superSaveDontShowAgainContinue(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainContinue(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `enableAllMessages` instead
    ///
    pub const EnableAllMessages = enableAllMessages;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    pub fn enableAllMessages(self: KMessageBoxDontAskAgainInterface) void {
        qtc.KMessageBoxDontAskAgainInterface_EnableAllMessages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnableAllMessages` instead
    ///
    pub const OnEnableAllMessages = onEnableAllMessages;

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
    pub fn onEnableAllMessages(self: KMessageBoxDontAskAgainInterface, callback: *const fn () callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnEnableAllMessages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnableAllMessages` instead
    ///
    pub const SuperEnableAllMessages = superEnableAllMessages;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    pub fn superEnableAllMessages(self: KMessageBoxDontAskAgainInterface) void {
        qtc.KMessageBoxDontAskAgainInterface_SuperEnableAllMessages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enableMessage` instead
    ///
    pub const EnableMessage = enableMessage;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn enableMessage(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_EnableMessage(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `onEnableMessage` instead
    ///
    pub const OnEnableMessage = onEnableMessage;

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
    pub fn onEnableMessage(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnEnableMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnableMessage` instead
    ///
    pub const SuperEnableMessage = superEnableMessage;

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
    pub fn superEnableMessage(self: KMessageBoxDontAskAgainInterface, dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBoxDontAskAgainInterface_SuperEnableMessage(@ptrCast(self.ptr), dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `setConfig` instead
    ///
    pub const SetConfig = setConfig;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` config: KConfig `
    ///
    pub fn setConfig(self: KMessageBoxDontAskAgainInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KMessageBoxDontAskAgainInterface_SetConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `onSetConfig` instead
    ///
    pub const OnSetConfig = onSetConfig;

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
    pub fn onSetConfig(self: KMessageBoxDontAskAgainInterface, callback: *const fn (KMessageBoxDontAskAgainInterface, KConfig) callconv(.c) void) void {
        qtc.KMessageBoxDontAskAgainInterface_OnSetConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetConfig` instead
    ///
    pub const SuperSetConfig = superSetConfig;

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
    pub fn superSetConfig(self: KMessageBoxDontAskAgainInterface, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KMessageBoxDontAskAgainInterface_SuperSetConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    /// ` param1: KMessageBoxDontAskAgainInterface `
    ///
    pub fn operatorAssign(self: KMessageBoxDontAskAgainInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KMessageBoxDontAskAgainInterface;
        qtc.KMessageBoxDontAskAgainInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#dtor.KMessageBoxDontAskAgainInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KMessageBoxDontAskAgainInterface `
    ///
    pub fn delete(self: KMessageBoxDontAskAgainInterface) void {
        qtc.KMessageBoxDontAskAgainInterface_Delete(@ptrCast(self.ptr));
    }
};
