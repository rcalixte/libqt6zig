const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const QWidget = @import("libqt6").QWidget;
const kjobuidelegate_enums = @import("../extras-kcoreaddons/libkjobuidelegate.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kio-jobuidelegatefactory.html)
pub const KIO__JobUiDelegateFactory = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegatefactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__JobUiDelegateFactory,

    pub const _is_KIO__JobUiDelegateFactory = {};

    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__JobUiDelegateFactory `
    ///
    pub fn CreateDelegate(self: KIO__JobUiDelegateFactory) KJobUiDelegate {
        return .{ .ptr = qtc.KIO__JobUiDelegateFactory_CreateDelegate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__JobUiDelegateFactory `
    ///
    /// ` flags: flag of kjobuidelegate_enums.Flag `
    ///
    /// ` window: QWidget `
    ///
    pub fn CreateDelegate2(self: KIO__JobUiDelegateFactory, flags: i32, window: anytype) KJobUiDelegate {
        comptime _ = @TypeOf(window)._is_QWidget;
        return .{ .ptr = qtc.KIO__JobUiDelegateFactory_CreateDelegate2(@ptrCast(self.ptr), @bitCast(flags), @ptrCast(window.ptr)) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
    ///
    pub fn CreateDefaultJobUiDelegate() KJobUiDelegate {
        return .{ .ptr = qtc.KIO_CreateDefaultJobUiDelegate() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: flag of kjobuidelegate_enums.Flag `
    ///
    /// ` param2: QWidget `
    ///
    pub fn CreateDefaultJobUiDelegate2(param1: i32, param2: anytype) KJobUiDelegate {
        comptime _ = @TypeOf(param2)._is_QWidget;
        return .{ .ptr = qtc.KIO_CreateDefaultJobUiDelegate2(@bitCast(param1), @ptrCast(param2.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#defaultJobUiDelegateFactory)
    ///
    pub fn DefaultJobUiDelegateFactory() KIO__JobUiDelegateFactory {
        return .{ .ptr = qtc.KIO_DefaultJobUiDelegateFactory() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#setDefaultJobUiDelegateFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__JobUiDelegateFactory `
    ///
    pub fn SetDefaultJobUiDelegateFactory(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__JobUiDelegateFactory;
        qtc.KIO_SetDefaultJobUiDelegateFactory(@ptrCast(param1.ptr));
    }
};
