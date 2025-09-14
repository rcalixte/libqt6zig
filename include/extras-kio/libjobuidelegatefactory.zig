const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjobuidelegate_enums = @import("../extras-kcoreaddons/libkjobuidelegate.zig").enums;

/// https://api.kde.org/kio-jobuidelegatefactory.html
pub const kio__jobuidelegatefactory = struct {
    /// [Qt documentation](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
    ///
    /// ``` self: QtC.KIO__JobUiDelegateFactory ```
    pub fn CreateDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KIO__JobUiDelegateFactory_CreateDelegate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
    ///
    /// ``` self: QtC.KIO__JobUiDelegateFactory, flags: flag of kjobuidelegate_enums.Flag, window: QtC.QWidget ```
    pub fn CreateDelegate2(self: ?*anyopaque, flags: i32, window: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KIO__JobUiDelegateFactory_CreateDelegate2(@ptrCast(self), @intCast(flags), @ptrCast(window));
    }
};

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
    ///
    ///
    pub fn CreateDefaultJobUiDelegate() QtC.KJobUiDelegate {
        return qtc.KIO_CreateDefaultJobUiDelegate();
    }

    /// [Qt documentation](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
    ///
    /// ``` param1: flag of kjobuidelegate_enums.Flag, param2: QtC.QWidget ```
    pub fn CreateDefaultJobUiDelegate2(param1: i32, param2: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KIO_CreateDefaultJobUiDelegate2(@intCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#defaultJobUiDelegateFactory)
    ///
    ///
    pub fn DefaultJobUiDelegateFactory() QtC.KIO__JobUiDelegateFactory {
        return qtc.KIO_DefaultJobUiDelegateFactory();
    }

    /// [Qt documentation](https://api.kde.org/kio.html#setDefaultJobUiDelegateFactory)
    ///
    /// ``` param1: QtC.KIO__JobUiDelegateFactory ```
    pub fn SetDefaultJobUiDelegateFactory(param1: ?*anyopaque) void {
        qtc.KIO_SetDefaultJobUiDelegateFactory(@ptrCast(param1));
    }
};
