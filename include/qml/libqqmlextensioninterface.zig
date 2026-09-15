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

    /// ### DEPRECATED: Use `superRegisterTypes` instead
    ///
    pub const SuperRegisterTypes = superRegisterTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlTypesExtensionInterface `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn superRegisterTypes(self: QQmlTypesExtensionInterface, uri: [:0]const u8) void {
        const uri_Cstring = uri.ptr;
        qtc.QQmlTypesExtensionInterface_SuperRegisterTypes(@ptrCast(self.ptr), uri_Cstring);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlTypesExtensionInterface `
    ///
    /// ` param1: QQmlTypesExtensionInterface `
    ///
    pub fn operatorAssign(self: QQmlTypesExtensionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlTypesExtensionInterface;
        qtc.QQmlTypesExtensionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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

    /// ### DEPRECATED: Use `superInitializeEngine` instead
    ///
    pub const SuperInitializeEngine = superInitializeEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    /// ` engine: QQmlEngine `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn superInitializeEngine(self: QQmlExtensionInterface, engine: anytype, uri: [:0]const u8) void {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        const uri_Cstring = uri.ptr;
        qtc.QQmlExtensionInterface_SuperInitializeEngine(@ptrCast(self.ptr), @ptrCast(engine.ptr), uri_Cstring);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    /// ` param1: QQmlExtensionInterface `
    ///
    pub fn operatorAssign(self: QQmlExtensionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlExtensionInterface;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlExtensionInterface")) param1.asQQmlExtensionInterface() else param1;
        qtc.QQmlExtensionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1_.ptr));
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

    /// ### DEPRECATED: Use `superRegisterTypes` instead
    ///
    pub const SuperRegisterTypes = superRegisterTypes;

    /// Inherited from QQmlTypesExtensionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlExtensionInterface `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn superRegisterTypes(self: QQmlExtensionInterface, uri: [:0]const u8) void {
        const uri_Cstring = uri.ptr;
        qtc.QQmlExtensionInterface_SuperRegisterTypes(@ptrCast(self.ptr), uri_Cstring);
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

    /// ### DEPRECATED: Use `initializeEngine` instead
    ///
    pub const InitializeEngine = initializeEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#initializeEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngineExtensionInterface `
    ///
    /// ` engine: QQmlEngine `
    ///
    /// ` uri: [:0]const u8 `
    ///
    pub fn initializeEngine(self: QQmlEngineExtensionInterface, engine: anytype, uri: [:0]const u8) void {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        const uri_Cstring = uri.ptr;
        qtc.QQmlEngineExtensionInterface_InitializeEngine(@ptrCast(self.ptr), @ptrCast(engine.ptr), uri_Cstring);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngineExtensionInterface `
    ///
    /// ` param1: QQmlEngineExtensionInterface `
    ///
    pub fn operatorAssign(self: QQmlEngineExtensionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlEngineExtensionInterface;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlEngineExtensionInterface")) param1.asQQmlEngineExtensionInterface() else param1;
        qtc.QQmlEngineExtensionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1_.ptr));
    }

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
