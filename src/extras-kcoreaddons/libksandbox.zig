const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;

/// https://api.kde.org/ksandbox.html
pub const ksandbox = struct {
    /// [Qt documentation](https://api.kde.org/ksandbox.html#isInside)
    ///
    ///
    pub fn IsInside() bool {
        return qtc.KSandbox_IsInside();
    }

    /// [Qt documentation](https://api.kde.org/ksandbox.html#isFlatpak)
    ///
    ///
    pub fn IsFlatpak() bool {
        return qtc.KSandbox_IsFlatpak();
    }

    /// [Qt documentation](https://api.kde.org/ksandbox.html#isSnap)
    ///
    ///
    pub fn IsSnap() bool {
        return qtc.KSandbox_IsSnap();
    }

    /// [Qt documentation](https://api.kde.org/ksandbox.html#makeHostContext)
    ///
    /// ``` param1: QtC.QProcess ```
    pub fn MakeHostContext(param1: ?*anyopaque) QtC.KSandbox__ProcessContext {
        return qtc.KSandbox_MakeHostContext(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/ksandbox.html#startHostProcess)
    ///
    /// ``` param1: QtC.QProcess, param2: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn StartHostProcess(param1: ?*anyopaque, param2: i32) void {
        qtc.KSandbox_StartHostProcess(@ptrCast(param1), @intCast(param2));
    }
};

/// https://api.kde.org/ksandbox-processcontext.html
pub const ksandbox__processcontext = struct {
    /// New constructs a new KSandbox::ProcessContext object.
    ///
    /// ``` param1: QtC.KSandbox__ProcessContext ```
    pub fn New(param1: ?*anyopaque) QtC.KSandbox__ProcessContext {
        return qtc.KSandbox__ProcessContext_new(@ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSandbox__ProcessContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSandbox__ProcessContext_Delete(@ptrCast(self));
    }
};
