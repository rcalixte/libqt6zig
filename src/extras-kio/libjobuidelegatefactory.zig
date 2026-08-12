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

    /// ### DEPRECATED: Use `createDelegate` instead
    ///
    pub const CreateDelegate = createDelegate;

    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__JobUiDelegateFactory `
    ///
    pub fn createDelegate(self: KIO__JobUiDelegateFactory) KJobUiDelegate {
        return .{ .ptr = qtc.KIO__JobUiDelegateFactory_CreateDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createDelegate2` instead
    ///
    pub const CreateDelegate2 = createDelegate2;

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
    pub fn createDelegate2(self: KIO__JobUiDelegateFactory, flags: i32, window: anytype) KJobUiDelegate {
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

    /// ### DEPRECATED: Use `createDefaultJobUiDelegate` instead
    ///
    pub const CreateDefaultJobUiDelegate = createDefaultJobUiDelegate;

    /// ### [Upstream resources](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
    ///
    pub fn createDefaultJobUiDelegate() KJobUiDelegate {
        return .{ .ptr = qtc.KIO_CreateDefaultJobUiDelegate() };
    }

    /// ### DEPRECATED: Use `createDefaultJobUiDelegate2` instead
    ///
    pub const CreateDefaultJobUiDelegate2 = createDefaultJobUiDelegate2;

    /// ### [Upstream resources](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of kjobuidelegate_enums.Flag `
    ///
    /// ` window: QWidget `
    ///
    pub fn createDefaultJobUiDelegate2(flags: i32, window: anytype) KJobUiDelegate {
        comptime _ = @TypeOf(window)._is_QWidget;
        return .{ .ptr = qtc.KIO_CreateDefaultJobUiDelegate2(@bitCast(flags), @ptrCast(window.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultJobUiDelegateFactory` instead
    ///
    pub const DefaultJobUiDelegateFactory = defaultJobUiDelegateFactory;

    /// ### [Upstream resources](https://api.kde.org/kio.html#defaultJobUiDelegateFactory)
    ///
    pub fn defaultJobUiDelegateFactory() KIO__JobUiDelegateFactory {
        return .{ .ptr = qtc.KIO_DefaultJobUiDelegateFactory() };
    }

    /// ### DEPRECATED: Use `setDefaultJobUiDelegateFactory` instead
    ///
    pub const SetDefaultJobUiDelegateFactory = setDefaultJobUiDelegateFactory;

    /// ### [Upstream resources](https://api.kde.org/kio.html#setDefaultJobUiDelegateFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` factory: KIO__JobUiDelegateFactory `
    ///
    pub fn setDefaultJobUiDelegateFactory(factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KIO__JobUiDelegateFactory;
        qtc.KIO_SetDefaultJobUiDelegateFactory(@ptrCast(factory.ptr));
    }
};
