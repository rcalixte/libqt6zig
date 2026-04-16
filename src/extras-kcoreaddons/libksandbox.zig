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

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#isInside)
    ///
    pub fn IsInside() bool {
        return qtc.KSandbox_IsInside();
    }

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#isFlatpak)
    ///
    pub fn IsFlatpak() bool {
        return qtc.KSandbox_IsFlatpak();
    }

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#isSnap)
    ///
    pub fn IsSnap() bool {
        return qtc.KSandbox_IsSnap();
    }

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#makeHostContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QProcess `
    ///
    pub fn MakeHostContext(param1: anytype) KSandbox__ProcessContext {
        comptime _ = @TypeOf(param1)._is_QProcess;
        return .{ .ptr = qtc.KSandbox_MakeHostContext(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#startHostProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QProcess `
    ///
    /// ` param2: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn StartHostProcess(param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QProcess;
        qtc.KSandbox_StartHostProcess(@ptrCast(param1.ptr), @bitCast(param2));
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

    /// New constructs a new KSandbox::ProcessContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KSandbox__ProcessContext `
    ///
    pub fn New(param1: anytype) KSandbox__ProcessContext {
        comptime _ = @TypeOf(param1)._is_KSandbox__ProcessContext;
        return .{ .ptr = qtc.KSandbox__ProcessContext_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSandbox__ProcessContext `
    ///
    pub fn Delete(self: KSandbox__ProcessContext) void {
        qtc.KSandbox__ProcessContext_Delete(@ptrCast(self.ptr));
    }
};
