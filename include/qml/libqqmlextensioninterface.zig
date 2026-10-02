const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QQmlEngine = @import("libqt6").QQmlEngine;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html)
pub const QQmlTypesExtensionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlTypesExtensionInterface,

    pub const _is_QQmlTypesExtensionInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlTypesExtensionInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlTypesExtensionInterface `
    ///
    pub fn new(param1: anytype) QQmlTypesExtensionInterface {
        comptime _ = @TypeOf(param1)._is_QQmlTypesExtensionInterface;
        return .{ .ptr = qtc.QQmlTypesExtensionInterface_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `registerTypes` instead
    ///
    pub const RegisterTypes = registerTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
    ///
    /// This method must be implemented with `onRegisterTypes` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlTypesExtensionInterface `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn registerTypes(self: QQmlTypesExtensionInterface, uri: [:0]const u8) void {
        const uri_Cstring = uri.ptr;
        qtc.QQmlTypesExtensionInterface_RegisterTypes(@ptrCast(self.ptr), uri_Cstring);
    }

    /// ### DEPRECATED: Use `onRegisterTypes` instead
    ///
    pub const OnRegisterTypes = onRegisterTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlTypesExtensionInterface `
    ///
    /// ` callback: *const fn (self: QQmlTypesExtensionInterface, uri: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRegisterTypes(self: QQmlTypesExtensionInterface, callback: *const fn (QQmlTypesExtensionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QQmlTypesExtensionInterface_OnRegisterTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#dtor.QQmlTypesExtensionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlTypesExtensionInterface `
    ///
    pub fn delete(self: QQmlTypesExtensionInterface) void {
        qtc.QQmlTypesExtensionInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html)
pub const QQmlExtensionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlExtensionInterface,

    pub const _is_QQmlExtensionInterface = {};
    pub const _is_QQmlTypesExtensionInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlExtensionInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlExtensionInterface `
    ///
    pub fn new(param1: anytype) QQmlExtensionInterface {
        comptime _ = @TypeOf(param1)._is_QQmlExtensionInterface;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlExtensionInterface")) param1.asQQmlExtensionInterface() else param1;

        return .{ .ptr = qtc.QQmlExtensionInterface_new(@ptrCast(param1_.ptr)) };
    }

    /// ### DEPRECATED: Use `initializeEngine` instead
    ///
    pub const InitializeEngine = initializeEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
    ///
    /// This method must be implemented with `onInitializeEngine` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    /// ` engine: QQmlEngine `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn initializeEngine(self: QQmlExtensionInterface, engine: anytype, uri: [:0]const u8) void {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        const uri_Cstring = uri.ptr;
        qtc.QQmlExtensionInterface_InitializeEngine(@ptrCast(self.ptr), @ptrCast(engine.ptr), uri_Cstring);
    }

    /// ### DEPRECATED: Use `onInitializeEngine` instead
    ///
    pub const OnInitializeEngine = onInitializeEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    /// ` callback: *const fn (self: QQmlExtensionInterface, engine: QQmlEngine, uri: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInitializeEngine(self: QQmlExtensionInterface, callback: *const fn (QQmlExtensionInterface, QQmlEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QQmlExtensionInterface_OnInitializeEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `registerTypes` instead
    ///
    pub const RegisterTypes = registerTypes;

    /// Inherited from QQmlTypesExtensionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// This method must be implemented with `onRegisterTypes` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn registerTypes(self: QQmlExtensionInterface, uri: [:0]const u8) void {
        const uri_Cstring = uri.ptr;
        qtc.QQmlExtensionInterface_RegisterTypes(@ptrCast(self.ptr), uri_Cstring);
    }

    /// ### DEPRECATED: Use `onRegisterTypes` instead
    ///
    pub const OnRegisterTypes = onRegisterTypes;

    /// Inherited from QQmlTypesExtensionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlExtensionInterface`
    ///
    /// ` callback: *const fn (self: QQmlExtensionInterface, uri: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRegisterTypes(self: QQmlExtensionInterface, callback: *const fn (QQmlExtensionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QQmlExtensionInterface_OnRegisterTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#dtor.QQmlExtensionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    pub fn delete(self: QQmlExtensionInterface) void {
        qtc.QQmlExtensionInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html)
pub const QQmlEngineExtensionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlEngineExtensionInterface,

    pub const _is_QQmlEngineExtensionInterface = {};

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#dtor.QQmlEngineExtensionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlEngineExtensionInterface `
    ///
    pub fn delete(self: QQmlEngineExtensionInterface) void {
        qtc.QQmlEngineExtensionInterface_Delete(@ptrCast(self.ptr));
    }
};
