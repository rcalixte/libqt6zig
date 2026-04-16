const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const qopenglversionfunctions_enums = enums;
const Struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)
pub const QOpenGLVersionStatus = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionStatus,

    pub const _is_QOpenGLVersionStatus = {};

    /// New constructs a new QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionStatus `
    ///
    pub fn New(other: anytype) QOpenGLVersionStatus {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionStatus;
        return .{ .ptr = qtc.QOpenGLVersionStatus_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QOpenGLVersionStatus object and invalidates the source QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionStatus `
    ///
    pub fn New2(other: anytype) QOpenGLVersionStatus {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionStatus;
        return .{ .ptr = qtc.QOpenGLVersionStatus_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QOpenGLVersionStatus object.
    ///
    pub fn New3() QOpenGLVersionStatus {
        return .{ .ptr = qtc.QOpenGLVersionStatus_new3() };
    }

    /// New4 constructs a new QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` majorVersion: i32 `
    ///
    /// ` minorVersion: i32 `
    ///
    /// ` functionStatus: qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn New4(majorVersion: i32, minorVersion: i32, functionStatus: i32) QOpenGLVersionStatus {
        return .{ .ptr = qtc.QOpenGLVersionStatus_new4(@bitCast(majorVersion), @bitCast(minorVersion), @bitCast(functionStatus)) };
    }

    /// New5 constructs a new QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOpenGLVersionStatus `
    ///
    pub fn New5(param1: anytype) QOpenGLVersionStatus {
        comptime _ = @TypeOf(param1)._is_QOpenGLVersionStatus;
        return .{ .ptr = qtc.QOpenGLVersionStatus_new5(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    pub fn Version(self: QOpenGLVersionStatus) Struct_i32_i32 {
        const version_pair = qtc.QOpenGLVersionStatus_Version(@ptrCast(self.ptr));
        return @bitCast(version_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ` version: Struct_i32_i32 `
    ///
    pub fn SetVersion(self: QOpenGLVersionStatus, version: Struct_i32_i32) void {
        qtc.QOpenGLVersionStatus_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

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
    pub fn Status(self: QOpenGLVersionStatus) i32 {
        return qtc.QOpenGLVersionStatus_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ` status: qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn SetStatus(self: QOpenGLVersionStatus, status: i32) void {
        qtc.QOpenGLVersionStatus_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    /// ` param1: QOpenGLVersionStatus `
    ///
    pub fn OperatorAssign(self: QOpenGLVersionStatus, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QOpenGLVersionStatus;
        qtc.QOpenGLVersionStatus_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#dtor.QOpenGLVersionStatus)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionStatus `
    ///
    pub fn Delete(self: QOpenGLVersionStatus) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsBackend `
    ///
    pub fn Context(self: QOpenGLVersionFunctionsBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLVersionFunctionsBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#dtor.QOpenGLVersionFunctionsBackend)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionFunctionsBackend `
    ///
    pub fn Delete(self: QOpenGLVersionFunctionsBackend) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsStorage `
    ///
    pub fn Backends(self: QOpenGLVersionFunctionsStorage) *QtC.QOpenGLVersionFunctionsBackend {
        return qtc.QOpenGLVersionFunctionsStorage_Backends(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionFunctionsStorage `
    ///
    /// ` backends: *QOpenGLVersionFunctionsBackend.ptr `
    ///
    pub fn SetBackends(self: QOpenGLVersionFunctionsStorage, backends: *?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_SetBackends(@ptrCast(self.ptr), @ptrCast(backends));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#dtor.QOpenGLVersionFunctionsStorage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionFunctionsStorage `
    ///
    pub fn Delete(self: QOpenGLVersionFunctionsStorage) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractOpenGLFunctions `
    ///
    pub fn InitializeOpenGLFunctions(self: QAbstractOpenGLFunctions) bool {
        return qtc.QAbstractOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#dtor.QAbstractOpenGLFunctions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractOpenGLFunctions `
    ///
    pub fn Delete(self: QAbstractOpenGLFunctions) void {
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_0_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_1_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_2_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_2_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_3_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_3_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_4_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_4_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_5_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_5_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_2_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_2_0_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_1_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_2_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_1_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_2_1_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_3_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_3_0_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_3_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_3_1_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_3_2_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_3_2_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_3_3_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_3_3_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_0_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_0_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_1_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_1_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_2_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_2_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_3_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_3_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_3_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_3_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_4_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_4_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_5_CoreBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_5_CoreBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_0_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_0_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_1_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_1_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_2_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_2_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_3_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_3_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_3_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_1_4_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_4_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_1_4_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_2_0_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_2_0_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_3_0_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_3_0_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_3_3_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_3_3_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_DeprecatedBackend `
    ///
    pub fn Context(self: QOpenGLFunctions_4_5_DeprecatedBackend) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_DeprecatedBackend `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetContext(self: QOpenGLFunctions_4_5_DeprecatedBackend, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    /// ` isEnabled: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsEnabled(self: QOpenGLFunctions_1_0_CoreBackend__Functions, isEnabled: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_SetIsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(isEnabled)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_1_0_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    /// ` isTexture: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsTexture(self: QOpenGLFunctions_1_1_CoreBackend__Functions, isTexture: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_SetIsTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(isTexture)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_1_1_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` unmapBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetUnmapBuffer(self: QOpenGLFunctions_1_5_CoreBackend__Functions, unmapBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetUnmapBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(unmapBuffer)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` isBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsBuffer(self: QOpenGLFunctions_1_5_CoreBackend__Functions, isBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(isBuffer)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` isQuery: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsQuery(self: QOpenGLFunctions_1_5_CoreBackend__Functions, isQuery: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(isQuery)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_1_5_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` isShader: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsShader(self: QOpenGLFunctions_2_0_CoreBackend__Functions, isShader: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(isShader)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` isProgram: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsProgram(self: QOpenGLFunctions_2_0_CoreBackend__Functions, isProgram: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(isProgram)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` createShader: *const fn (funcparam1: u32) callconv(.c) u32 `
    ///
    pub fn SetCreateShader(self: QOpenGLFunctions_2_0_CoreBackend__Functions, createShader: *const fn (u32) callconv(.c) u32) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(createShader)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` createProgram: *const fn () callconv(.c) u32 `
    ///
    pub fn SetCreateProgram(self: QOpenGLFunctions_2_0_CoreBackend__Functions, createProgram: *const fn () callconv(.c) u32) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(createProgram)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_2_0_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isVertexArray: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsVertexArray(self: QOpenGLFunctions_3_0_CoreBackend__Functions, isVertexArray: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsVertexArray(@ptrCast(self.ptr), @bitCast(@intFromPtr(isVertexArray)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isFramebuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsFramebuffer(self: QOpenGLFunctions_3_0_CoreBackend__Functions, isFramebuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsFramebuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(isFramebuffer)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isRenderbuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsRenderbuffer(self: QOpenGLFunctions_3_0_CoreBackend__Functions, isRenderbuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsRenderbuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(isRenderbuffer)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isEnabledi: *const fn (funcparam1: u32, funcparam2: u32) callconv(.c) u8 `
    ///
    pub fn SetIsEnabledi(self: QOpenGLFunctions_3_0_CoreBackend__Functions, isEnabledi: *const fn (u32, u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsEnabledi(@ptrCast(self.ptr), @bitCast(@intFromPtr(isEnabledi)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_3_0_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    /// ` isSampler: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsSampler(self: QOpenGLFunctions_3_3_CoreBackend__Functions, isSampler: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_SetIsSampler(@ptrCast(self.ptr), @bitCast(@intFromPtr(isSampler)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_3_3_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    /// ` isTransformFeedback: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsTransformFeedback(self: QOpenGLFunctions_4_0_CoreBackend__Functions, isTransformFeedback: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_SetIsTransformFeedback(@ptrCast(self.ptr), @bitCast(@intFromPtr(isTransformFeedback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_4_0_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    /// ` isProgramPipeline: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsProgramPipeline(self: QOpenGLFunctions_4_1_CoreBackend__Functions, isProgramPipeline: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_SetIsProgramPipeline(@ptrCast(self.ptr), @bitCast(@intFromPtr(isProgramPipeline)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_4_1_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    /// ` unmapNamedBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetUnmapNamedBuffer(self: QOpenGLFunctions_4_5_CoreBackend__Functions, unmapNamedBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_SetUnmapNamedBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(unmapNamedBuffer)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_4_5_CoreBackend__Functions) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` isList: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsList(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions, isList: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetIsList(@ptrCast(self.ptr), @bitCast(@intFromPtr(isList)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` renderMode: *const fn (funcparam1: u32) callconv(.c) i32 `
    ///
    pub fn SetRenderMode(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions, renderMode: *const fn (u32) callconv(.c) i32) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetRenderMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(renderMode)));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` genLists: *const fn (funcparam1: i32) callconv(.c) u32 `
    ///
    pub fn SetGenLists(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions, genLists: *const fn (i32) callconv(.c) u32) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetGenLists(@ptrCast(self.ptr), @bitCast(@intFromPtr(genLists)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    pub fn Delete(self: QOpenGLFunctions_1_0_DeprecatedBackend__Functions) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctions.html#public-types)
pub const enums = struct {
    pub const OpenGLStatus = enum(i32) {
        pub const CoreStatus: i32 = 0;
        pub const DeprecatedStatus: i32 = 1;
        pub const InvalidStatus: i32 = 2;
    };

    pub const Version = enum(i32) {
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
