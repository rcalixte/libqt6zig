const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const qopenglversionfunctions_enums = enums;
const Struct_i32_i32 = @import("libqt6").types.Struct_i32_i32; // extern struct { first: i32, second: i32 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)
pub const QOpenGLVersionStatus = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionStatus,

    pub const _is_QOpenGLVersionStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLVersionStatus object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionStatus `
    ///
    pub fn new(other: anytype) QOpenGLVersionStatus {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionStatus;
        return .{ .ptr = qtc.QOpenGLVersionStatus_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLVersionStatus object and invalidate the source QOpenGLVersionStatus object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionStatus `
    ///
    pub fn new2(other: anytype) QOpenGLVersionStatus {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionStatus;
        return .{ .ptr = qtc.QOpenGLVersionStatus_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLVersionStatus object in C++ memory
    ///
    pub fn new3() QOpenGLVersionStatus {
        return .{ .ptr = qtc.QOpenGLVersionStatus_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QOpenGLVersionStatus object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` majorVersion: i32 `
    ///
    /// ` minorVersion: i32 `
    ///
    /// ` functionStatus: qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn new4(majorVersion: i32, minorVersion: i32, functionStatus: i32) QOpenGLVersionStatus {
        return .{ .ptr = qtc.QOpenGLVersionStatus_new4(@bitCast(majorVersion), @bitCast(minorVersion), @bitCast(functionStatus)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QOpenGLVersionStatus object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOpenGLVersionStatus `
    ///
    pub fn new5(param1: anytype) QOpenGLVersionStatus {
        comptime _ = @TypeOf(param1)._is_QOpenGLVersionStatus;
        return .{ .ptr = qtc.QOpenGLVersionStatus_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    pub fn version(self: QOpenGLVersionStatus) Struct_i32_i32 {
        const version_pair = qtc.QOpenGLVersionStatus_Version(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(version_pair.first),
            .second = @bitCast(version_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ` _version: Struct_i32_i32 `
    ///
    pub fn setVersion(self: QOpenGLVersionStatus, _version: Struct_i32_i32) void {
        qtc.QOpenGLVersionStatus_SetVersion(@ptrCast(self.ptr), .{
            .first = @bitCast(_version.first),
            .second = @bitCast(_version.second),
        });
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ## Returns:
    ///
    /// ` qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn status(self: QOpenGLVersionStatus) i32 {
        return qtc.QOpenGLVersionStatus_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ` _status: qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn setStatus(self: QOpenGLVersionStatus, _status: i32) void {
        qtc.QOpenGLVersionStatus_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ` param1: QOpenGLVersionStatus `
    ///
    pub fn operatorAssign(self: QOpenGLVersionStatus, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QOpenGLVersionStatus;
        qtc.QOpenGLVersionStatus_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#dtor.QOpenGLVersionStatus)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    pub fn delete(self: QOpenGLVersionStatus) void {
        qtc.QOpenGLVersionStatus_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html)
pub const QOpenGLVersionFunctionsBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionFunctionsBackend,

    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsBackend `
    ///
    pub fn context(self: QOpenGLVersionFunctionsBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLVersionFunctionsBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#dtor.QOpenGLVersionFunctionsBackend)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionFunctionsBackend `
    ///
    pub fn delete(self: QOpenGLVersionFunctionsBackend) void {
        qtc.QOpenGLVersionFunctionsBackend_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html)
pub const QOpenGLVersionFunctionsStorage = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionFunctionsStorage,

    pub const _is_QOpenGLVersionFunctionsStorage = {};

    /// ### DEPRECATED: Use `backends` instead
    ///
    pub const Backends = backends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsStorage `
    ///
    pub fn backends(self: QOpenGLVersionFunctionsStorage) *QtC.QOpenGLVersionFunctionsBackend {
        return qtc.QOpenGLVersionFunctionsStorage_Backends(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackends` instead
    ///
    pub const SetBackends = setBackends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsStorage `
    ///
    /// ` _backends: *QOpenGLVersionFunctionsBackend.ptr `
    ///
    pub fn setBackends(self: QOpenGLVersionFunctionsStorage, _backends: *?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_SetBackends(@ptrCast(self.ptr), @ptrCast(_backends));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#dtor.QOpenGLVersionFunctionsStorage)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionFunctionsStorage `
    ///
    pub fn delete(self: QOpenGLVersionFunctionsStorage) void {
        qtc.QOpenGLVersionFunctionsStorage_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html)
pub const QAbstractOpenGLFunctions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractOpenGLFunctions,

    pub const _is_QAbstractOpenGLFunctions = {};

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractOpenGLFunctions `
    ///
    pub fn initializeOpenGLFunctions(self: QAbstractOpenGLFunctions) bool {
        return qtc.QAbstractOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#dtor.QAbstractOpenGLFunctions)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractOpenGLFunctions `
    ///
    pub fn delete(self: QAbstractOpenGLFunctions) void {
        qtc.QAbstractOpenGLFunctions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend.html)
pub const QOpenGLFunctions_1_0_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_0_CoreBackend,

    pub const _is_QOpenGLFunctions_1_0_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_0_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend.html)
pub const QOpenGLFunctions_1_1_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_1_CoreBackend,

    pub const _is_QOpenGLFunctions_1_1_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_1_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-corebackend.html)
pub const QOpenGLFunctions_1_2_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_2_CoreBackend,

    pub const _is_QOpenGLFunctions_1_2_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_2_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_2_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-corebackend.html)
pub const QOpenGLFunctions_1_3_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_3_CoreBackend,

    pub const _is_QOpenGLFunctions_1_3_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_3_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_3_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-corebackend.html)
pub const QOpenGLFunctions_1_4_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_4_CoreBackend,

    pub const _is_QOpenGLFunctions_1_4_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_4_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_4_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend.html)
pub const QOpenGLFunctions_1_5_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_5_CoreBackend,

    pub const _is_QOpenGLFunctions_1_5_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_5_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_5_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend.html)
pub const QOpenGLFunctions_2_0_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_2_0_CoreBackend,

    pub const _is_QOpenGLFunctions_2_0_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_2_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_2_0_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-1-corebackend.html)
pub const QOpenGLFunctions_2_1_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-1-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_2_1_CoreBackend,

    pub const _is_QOpenGLFunctions_2_1_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_1_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_2_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_1_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_2_1_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend.html)
pub const QOpenGLFunctions_3_0_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_0_CoreBackend,

    pub const _is_QOpenGLFunctions_3_0_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_3_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_3_0_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1-corebackend.html)
pub const QOpenGLFunctions_3_1_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_1_CoreBackend,

    pub const _is_QOpenGLFunctions_3_1_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_3_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_3_1_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-corebackend.html)
pub const QOpenGLFunctions_3_2_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_2_CoreBackend,

    pub const _is_QOpenGLFunctions_3_2_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_3_2_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_3_2_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend.html)
pub const QOpenGLFunctions_3_3_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_3_CoreBackend,

    pub const _is_QOpenGLFunctions_3_3_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_3_3_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_3_3_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend.html)
pub const QOpenGLFunctions_4_0_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_0_CoreBackend,

    pub const _is_QOpenGLFunctions_4_0_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_0_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend.html)
pub const QOpenGLFunctions_4_1_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_1_CoreBackend,

    pub const _is_QOpenGLFunctions_4_1_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_1_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-corebackend.html)
pub const QOpenGLFunctions_4_2_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_2_CoreBackend,

    pub const _is_QOpenGLFunctions_4_2_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_2_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_2_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-corebackend.html)
pub const QOpenGLFunctions_4_3_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_3_CoreBackend,

    pub const _is_QOpenGLFunctions_4_3_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_3_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_3_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_3_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_3_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-corebackend.html)
pub const QOpenGLFunctions_4_4_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_4_CoreBackend,

    pub const _is_QOpenGLFunctions_4_4_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_4_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_4_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend.html)
pub const QOpenGLFunctions_4_5_CoreBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_5_CoreBackend,

    pub const _is_QOpenGLFunctions_4_5_CoreBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_5_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_5_CoreBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend.html)
pub const QOpenGLFunctions_1_0_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_0_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_1_0_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_0_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_0_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-deprecatedbackend.html)
pub const QOpenGLFunctions_1_1_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_1_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_1_1_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_1_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_1_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-deprecatedbackend.html)
pub const QOpenGLFunctions_1_2_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_2_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_1_2_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_2_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_2_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-deprecatedbackend.html)
pub const QOpenGLFunctions_1_3_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_3_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_1_3_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_3_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_3_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-deprecatedbackend.html)
pub const QOpenGLFunctions_1_4_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_4_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_1_4_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_1_4_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_1_4_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-deprecatedbackend.html)
pub const QOpenGLFunctions_2_0_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_2_0_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_2_0_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_2_0_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_2_0_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-deprecatedbackend.html)
pub const QOpenGLFunctions_3_0_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_0_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_3_0_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_3_0_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_3_0_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-deprecatedbackend.html)
pub const QOpenGLFunctions_3_3_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_3_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_3_3_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_3_3_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_3_3_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-deprecatedbackend.html)
pub const QOpenGLFunctions_4_5_DeprecatedBackend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-deprecatedbackend.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_5_DeprecatedBackend,

    pub const _is_QOpenGLFunctions_4_5_DeprecatedBackend = {};
    pub const _is_QOpenGLVersionFunctionsBackend = {};

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_DeprecatedBackend `
    ///
    pub fn context(self: QOpenGLFunctions_4_5_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContext` instead
    ///
    pub const SetContext = setContext;

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_DeprecatedBackend `
    ///
    /// ` _context: QOpenGLContext `
    ///
    pub fn setContext(self: QOpenGLFunctions_4_5_DeprecatedBackend, _context: anytype) void {
        comptime _ = @TypeOf(_context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(_context.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html)
pub const QOpenGLFunctions_1_0_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_0_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_1_0_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsEnabled(self: QOpenGLFunctions_1_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_IsEnabled(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsEnabled` instead
    ///
    pub const SetIsEnabled = setIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    /// ` _IsEnabled: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsEnabled(self: QOpenGLFunctions_1_0_CoreBackend__Functions, _IsEnabled: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_SetIsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsEnabled)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_1_0_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html)
pub const QOpenGLFunctions_1_1_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_1_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_1_1_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsTexture(self: QOpenGLFunctions_1_1_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_IsTexture(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsTexture` instead
    ///
    pub const SetIsTexture = setIsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    /// ` _IsTexture: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsTexture(self: QOpenGLFunctions_1_1_CoreBackend__Functions, _IsTexture: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_SetIsTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsTexture)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_1_1_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html)
pub const QOpenGLFunctions_1_5_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_1_5_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn UnmapBuffer(self: QOpenGLFunctions_1_5_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_UnmapBuffer(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setUnmapBuffer` instead
    ///
    pub const SetUnmapBuffer = setUnmapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` _UnmapBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setUnmapBuffer(self: QOpenGLFunctions_1_5_CoreBackend__Functions, _UnmapBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetUnmapBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(_UnmapBuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsBuffer(self: QOpenGLFunctions_1_5_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_IsBuffer(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsBuffer` instead
    ///
    pub const SetIsBuffer = setIsBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` _IsBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsBuffer(self: QOpenGLFunctions_1_5_CoreBackend__Functions, _IsBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsBuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsQuery(self: QOpenGLFunctions_1_5_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_IsQuery(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsQuery` instead
    ///
    pub const SetIsQuery = setIsQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` _IsQuery: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsQuery(self: QOpenGLFunctions_1_5_CoreBackend__Functions, _IsQuery: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsQuery)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_1_5_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html)
pub const QOpenGLFunctions_2_0_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_2_0_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsShader(self: QOpenGLFunctions_2_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_IsShader(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsShader` instead
    ///
    pub const SetIsShader = setIsShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` _IsShader: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsShader(self: QOpenGLFunctions_2_0_CoreBackend__Functions, _IsShader: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsShader)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsProgram(self: QOpenGLFunctions_2_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_IsProgram(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsProgram` instead
    ///
    pub const SetIsProgram = setIsProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` _IsProgram: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsProgram(self: QOpenGLFunctions_2_0_CoreBackend__Functions, _IsProgram: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsProgram)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u32 `
    ///
    pub fn CreateShader(self: QOpenGLFunctions_2_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_CreateShader(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setCreateShader` instead
    ///
    pub const SetCreateShader = setCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` _CreateShader: *const fn (funcparam1: u32) callconv(.c) u32 `
    ///
    pub fn setCreateShader(self: QOpenGLFunctions_2_0_CoreBackend__Functions, _CreateShader: *const fn (u32) callconv(.c) u32) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(_CreateShader)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn () callconv(.c) u32 `
    ///
    pub fn CreateProgram(self: QOpenGLFunctions_2_0_CoreBackend__Functions) ?*const fn () callconv(.c) u32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_CreateProgram(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setCreateProgram` instead
    ///
    pub const SetCreateProgram = setCreateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` _CreateProgram: *const fn () callconv(.c) u32 `
    ///
    pub fn setCreateProgram(self: QOpenGLFunctions_2_0_CoreBackend__Functions, _CreateProgram: *const fn () callconv(.c) u32) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(_CreateProgram)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_2_0_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html)
pub const QOpenGLFunctions_3_0_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_3_0_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsVertexArray(self: QOpenGLFunctions_3_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsVertexArray(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsVertexArray` instead
    ///
    pub const SetIsVertexArray = setIsVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` _IsVertexArray: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsVertexArray(self: QOpenGLFunctions_3_0_CoreBackend__Functions, _IsVertexArray: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsVertexArray(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsVertexArray)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsFramebuffer(self: QOpenGLFunctions_3_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsFramebuffer(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsFramebuffer` instead
    ///
    pub const SetIsFramebuffer = setIsFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` _IsFramebuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsFramebuffer(self: QOpenGLFunctions_3_0_CoreBackend__Functions, _IsFramebuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsFramebuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsFramebuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsRenderbuffer(self: QOpenGLFunctions_3_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsRenderbuffer(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsRenderbuffer` instead
    ///
    pub const SetIsRenderbuffer = setIsRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` _IsRenderbuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsRenderbuffer(self: QOpenGLFunctions_3_0_CoreBackend__Functions, _IsRenderbuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsRenderbuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsRenderbuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32, funcparam2: u32) callconv(.c) u8 `
    ///
    pub fn IsEnabledi(self: QOpenGLFunctions_3_0_CoreBackend__Functions) ?*const fn (u32, u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsEnabledi(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsEnabledi` instead
    ///
    pub const SetIsEnabledi = setIsEnabledi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` _IsEnabledi: *const fn (funcparam1: u32, funcparam2: u32) callconv(.c) u8 `
    ///
    pub fn setIsEnabledi(self: QOpenGLFunctions_3_0_CoreBackend__Functions, _IsEnabledi: *const fn (u32, u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsEnabledi(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsEnabledi)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_3_0_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html)
pub const QOpenGLFunctions_3_3_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_3_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_3_3_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsSampler(self: QOpenGLFunctions_3_3_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_IsSampler(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsSampler` instead
    ///
    pub const SetIsSampler = setIsSampler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    /// ` _IsSampler: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsSampler(self: QOpenGLFunctions_3_3_CoreBackend__Functions, _IsSampler: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_SetIsSampler(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsSampler)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_3_3_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html)
pub const QOpenGLFunctions_4_0_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_0_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_4_0_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsTransformFeedback(self: QOpenGLFunctions_4_0_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_IsTransformFeedback(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsTransformFeedback` instead
    ///
    pub const SetIsTransformFeedback = setIsTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    /// ` _IsTransformFeedback: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsTransformFeedback(self: QOpenGLFunctions_4_0_CoreBackend__Functions, _IsTransformFeedback: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_SetIsTransformFeedback(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsTransformFeedback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_4_0_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html)
pub const QOpenGLFunctions_4_1_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_1_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_4_1_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsProgramPipeline(self: QOpenGLFunctions_4_1_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_IsProgramPipeline(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsProgramPipeline` instead
    ///
    pub const SetIsProgramPipeline = setIsProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    /// ` _IsProgramPipeline: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsProgramPipeline(self: QOpenGLFunctions_4_1_CoreBackend__Functions, _IsProgramPipeline: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_SetIsProgramPipeline(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsProgramPipeline)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_4_1_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html)
pub const QOpenGLFunctions_4_5_CoreBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_5_CoreBackend__Functions,

    pub const _is_QOpenGLFunctions_4_5_CoreBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn UnmapNamedBuffer(self: QOpenGLFunctions_4_5_CoreBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_UnmapNamedBuffer(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setUnmapNamedBuffer` instead
    ///
    pub const SetUnmapNamedBuffer = setUnmapNamedBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    /// ` _UnmapNamedBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setUnmapNamedBuffer(self: QOpenGLFunctions_4_5_CoreBackend__Functions, _UnmapNamedBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_SetUnmapNamedBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(_UnmapNamedBuffer)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_4_5_CoreBackend__Functions) void {
        qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html)
pub const QOpenGLFunctions_1_0_DeprecatedBackend__Functions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions,

    pub const _is_QOpenGLFunctions_1_0_DeprecatedBackend__Functions = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsList(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_IsList(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setIsList` instead
    ///
    pub const SetIsList = setIsList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` _IsList: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn setIsList(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions, _IsList: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetIsList(@ptrCast(self.ptr), @bitCast(@intFromPtr(_IsList)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) i32 `
    ///
    pub fn RenderMode(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions) ?*const fn (u32) callconv(.c) i32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_RenderMode(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setRenderMode` instead
    ///
    pub const SetRenderMode = setRenderMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` _RenderMode: *const fn (funcparam1: u32) callconv(.c) i32 `
    ///
    pub fn setRenderMode(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions, _RenderMode: *const fn (u32) callconv(.c) i32) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetRenderMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(_RenderMode)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: i32) callconv(.c) u32 `
    ///
    pub fn GenLists(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions) ?*const fn (i32) callconv(.c) u32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_GenLists(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setGenLists` instead
    ///
    pub const SetGenLists = setGenLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` _GenLists: *const fn (funcparam1: i32) callconv(.c) u32 `
    ///
    pub fn setGenLists(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions, _GenLists: *const fn (i32) callconv(.c) u32) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetGenLists(@ptrCast(self.ptr), @bitCast(@intFromPtr(_GenLists)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    pub fn delete(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctions.html#public-types)
pub const enums = struct {
    pub const OpenGLStatus = enum {
        pub const CoreStatus: i32 = 0;
        pub const DeprecatedStatus: i32 = 1;
        pub const InvalidStatus: i32 = 2;
    };

    pub const Version = enum {
        pub const OpenGL_1_0_Core: i32 = 0;
        pub const OpenGL_1_1_Core: i32 = 1;
        pub const OpenGL_1_2_Core: i32 = 2;
        pub const OpenGL_1_3_Core: i32 = 3;
        pub const OpenGL_1_4_Core: i32 = 4;
        pub const OpenGL_1_5_Core: i32 = 5;
        pub const OpenGL_2_0_Core: i32 = 6;
        pub const OpenGL_2_1_Core: i32 = 7;
        pub const OpenGL_3_0_Core: i32 = 8;
        pub const OpenGL_3_1_Core: i32 = 9;
        pub const OpenGL_3_2_Core: i32 = 10;
        pub const OpenGL_3_3_Core: i32 = 11;
        pub const OpenGL_4_0_Core: i32 = 12;
        pub const OpenGL_4_1_Core: i32 = 13;
        pub const OpenGL_4_2_Core: i32 = 14;
        pub const OpenGL_4_3_Core: i32 = 15;
        pub const OpenGL_4_4_Core: i32 = 16;
        pub const OpenGL_4_5_Core: i32 = 17;
        pub const OpenGL_1_0_Deprecated: i32 = 18;
        pub const OpenGL_1_1_Deprecated: i32 = 19;
        pub const OpenGL_1_2_Deprecated: i32 = 20;
        pub const OpenGL_1_3_Deprecated: i32 = 21;
        pub const OpenGL_1_4_Deprecated: i32 = 22;
        pub const OpenGL_2_0_Deprecated: i32 = 23;
        pub const OpenGL_3_0_Deprecated: i32 = 24;
        pub const OpenGL_3_3_Deprecated: i32 = 25;
        pub const OpenGL_4_5_Deprecated: i32 = 26;
        pub const OpenGLVersionBackendCount: i32 = 27;
    };
};
