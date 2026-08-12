const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QProcess = @import("libqt6").QProcess;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;

/// ### [Upstream resources](https://api.kde.org/ksandbox.html)
pub const KSandbox = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksandbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSandbox,

    pub const _is_KSandbox = {};

    /// ### DEPRECATED: Use `isInside` instead
    ///
    pub const IsInside = isInside;

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#isInside)
    ///
    pub fn isInside() bool {
        return qtc.KSandbox_IsInside();
    }

    /// ### DEPRECATED: Use `isFlatpak` instead
    ///
    pub const IsFlatpak = isFlatpak;

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#isFlatpak)
    ///
    pub fn isFlatpak() bool {
        return qtc.KSandbox_IsFlatpak();
    }

    /// ### DEPRECATED: Use `isSnap` instead
    ///
    pub const IsSnap = isSnap;

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#isSnap)
    ///
    pub fn isSnap() bool {
        return qtc.KSandbox_IsSnap();
    }

    /// ### DEPRECATED: Use `makeHostContext` instead
    ///
    pub const MakeHostContext = makeHostContext;

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#makeHostContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` process: QProcess `
    ///
    pub fn makeHostContext(process: anytype) KSandbox__ProcessContext {
        comptime _ = @TypeOf(process)._is_QProcess;
        return .{ .ptr = qtc.KSandbox_MakeHostContext(@ptrCast(process.ptr)) };
    }

    /// ### DEPRECATED: Use `startHostProcess` instead
    ///
    pub const StartHostProcess = startHostProcess;

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#startHostProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` process: QProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn startHostProcess(process: anytype, mode: i32) void {
        comptime _ = @TypeOf(process)._is_QProcess;
        qtc.KSandbox_StartHostProcess(@ptrCast(process.ptr), @bitCast(mode));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksandbox-processcontext.html)
pub const KSandbox__ProcessContext = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksandbox-processcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSandbox__ProcessContext,

    pub const _is_KSandbox__ProcessContext = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSandbox::ProcessContext object in C++ memory
    ///
    pub fn new() KSandbox__ProcessContext {
        return .{ .ptr = qtc.KSandbox__ProcessContext_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSandbox::ProcessContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KSandbox__ProcessContext `
    ///
    pub fn new2(param1: anytype) KSandbox__ProcessContext {
        comptime _ = @TypeOf(param1)._is_KSandbox__ProcessContext;
        return .{ .ptr = qtc.KSandbox__ProcessContext_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSandbox__ProcessContext `
    ///
    pub fn delete(self: KSandbox__ProcessContext) void {
        qtc.KSandbox__ProcessContext_Delete(@ptrCast(self.ptr));
    }
};
