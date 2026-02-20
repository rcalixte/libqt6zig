const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;

/// ### [Upstream resources](https://api.kde.org/ksandbox.html)
pub const ksandbox = struct {
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
    /// ` param1: QtC.QProcess `
    ///
    pub fn MakeHostContext(param1: ?*anyopaque) QtC.KSandbox__ProcessContext {
        return qtc.KSandbox_MakeHostContext(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ksandbox.html#startHostProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QProcess `
    ///
    /// ` param2: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn StartHostProcess(param1: ?*anyopaque, param2: i32) void {
        qtc.KSandbox_StartHostProcess(@ptrCast(param1), @bitCast(param2));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksandbox-processcontext.html)
pub const ksandbox__processcontext = struct {
    /// New constructs a new KSandbox::ProcessContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KSandbox__ProcessContext `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KSandbox__ProcessContext {
        return qtc.KSandbox__ProcessContext_new(@ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KSandbox__ProcessContext `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSandbox__ProcessContext_Delete(@ptrCast(self));
    }
};
