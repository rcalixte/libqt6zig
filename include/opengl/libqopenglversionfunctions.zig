const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglversionfunctions_enums = enums;
const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)
pub const qopenglversionstatus = struct {
    /// New constructs a new QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QOpenGLVersionStatus `
    ///
    pub fn New(other: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new(@ptrCast(other));
    }

    /// New2 constructs a new QOpenGLVersionStatus object and invalidates the source QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QOpenGLVersionStatus `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new2(@ptrCast(other));
    }

    /// New3 constructs a new QOpenGLVersionStatus object.
    ///
    pub fn New3() QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new3();
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
    pub fn New4(majorVersion: i32, minorVersion: i32, functionStatus: i32) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new4(@bitCast(majorVersion), @bitCast(minorVersion), @bitCast(functionStatus));
    }

    /// New5 constructs a new QOpenGLVersionStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QOpenGLVersionStatus `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new5(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionStatus `
    ///
    pub fn Version(self: ?*anyopaque) struct_i32_i32 {
        const version_pair = qtc.QOpenGLVersionStatus_Version(@ptrCast(self));
        return @bitCast(version_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionStatus `
    ///
    /// ` version: struct_i32_i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: struct_i32_i32) void {
        qtc.QOpenGLVersionStatus_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionStatus `
    ///
    /// ## Returns:
    ///
    /// ` qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.QOpenGLVersionStatus_Status(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionStatus `
    ///
    /// ` status: qopenglversionfunctions_enums.OpenGLStatus `
    ///
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.QOpenGLVersionStatus_SetStatus(@ptrCast(self), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionStatus `
    ///
    /// ` param1: QtC.QOpenGLVersionStatus `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLVersionStatus_OperatorAssign(@ptrCast(self), @ptrCast(param1));
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
    /// ` self: QtC.QOpenGLVersionStatus `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionStatus_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html)
pub const qopenglversionfunctionsbackend = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionFunctionsBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionFunctionsBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
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
    /// ` self: QtC.QOpenGLVersionFunctionsBackend `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html)
pub const qopenglversionfunctionsstorage = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionFunctionsStorage `
    ///
    pub fn Backends(self: ?*anyopaque) *QtC.QOpenGLVersionFunctionsBackend {
        return qtc.QOpenGLVersionFunctionsStorage_Backends(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionFunctionsStorage `
    ///
    /// ` backends: *QtC.QOpenGLVersionFunctionsBackend `
    ///
    pub fn SetBackends(self: ?*anyopaque, backends: *?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_SetBackends(@ptrCast(self), @ptrCast(backends));
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
    /// ` self: QtC.QOpenGLVersionFunctionsStorage `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsStorage_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html)
pub const qabstractopenglfunctions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractOpenGLFunctions `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QAbstractOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
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
    /// ` self: QtC.QAbstractOpenGLFunctions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QAbstractOpenGLFunctions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend.html)
pub const qopenglfunctions_1_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend.html)
pub const qopenglfunctions_1_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-corebackend.html)
pub const qopenglfunctions_1_2_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-corebackend.html)
pub const qopenglfunctions_1_3_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_3_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_3_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-corebackend.html)
pub const qopenglfunctions_1_4_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_4_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_4_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend.html)
pub const qopenglfunctions_1_5_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend.html)
pub const qopenglfunctions_2_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-1-corebackend.html)
pub const qopenglfunctions_2_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_1_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_1_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend.html)
pub const qopenglfunctions_3_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1-corebackend.html)
pub const qopenglfunctions_3_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_1_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_1_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-corebackend.html)
pub const qopenglfunctions_3_2_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_2_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_2_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend.html)
pub const qopenglfunctions_3_3_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend.html)
pub const qopenglfunctions_4_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_0_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_0_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend.html)
pub const qopenglfunctions_4_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_1_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_1_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-corebackend.html)
pub const qopenglfunctions_4_2_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-corebackend.html)
pub const qopenglfunctions_4_3_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-corebackend.html)
pub const qopenglfunctions_4_4_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_4_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_4_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend.html)
pub const qopenglfunctions_4_5_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_CoreBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_CoreBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend.html)
pub const qopenglfunctions_1_0_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-deprecatedbackend.html)
pub const qopenglfunctions_1_1_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-deprecatedbackend.html)
pub const qopenglfunctions_1_2_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-deprecatedbackend.html)
pub const qopenglfunctions_1_3_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_3_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_3_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-deprecatedbackend.html)
pub const qopenglfunctions_1_4_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_4_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_4_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-deprecatedbackend.html)
pub const qopenglfunctions_2_0_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-deprecatedbackend.html)
pub const qopenglfunctions_3_0_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-deprecatedbackend.html)
pub const qopenglfunctions_3_3_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-deprecatedbackend.html)
pub const qopenglfunctions_4_5_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_DeprecatedBackend `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_DeprecatedBackend `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html)
pub const qopenglfunctions_1_0_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsEnabled(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_IsEnabled(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    /// ` isEnabled: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsEnabled(self: ?*anyopaque, isEnabled: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_SetIsEnabled(@ptrCast(self), @bitCast(@intFromPtr(isEnabled)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html)
pub const qopenglfunctions_1_1_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsTexture(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_IsTexture(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    /// ` isTexture: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsTexture(self: ?*anyopaque, isTexture: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_SetIsTexture(@ptrCast(self), @bitCast(@intFromPtr(isTexture)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_1_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_1_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html)
pub const qopenglfunctions_1_5_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn UnmapBuffer(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_UnmapBuffer(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` unmapBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetUnmapBuffer(self: ?*anyopaque, unmapBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetUnmapBuffer(@ptrCast(self), @bitCast(@intFromPtr(unmapBuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsBuffer(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_IsBuffer(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` isBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsBuffer(self: ?*anyopaque, isBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsBuffer(@ptrCast(self), @bitCast(@intFromPtr(isBuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsQuery(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_IsQuery(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    /// ` isQuery: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsQuery(self: ?*anyopaque, isQuery: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsQuery(@ptrCast(self), @bitCast(@intFromPtr(isQuery)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_5_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html)
pub const qopenglfunctions_2_0_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsShader(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_IsShader(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` isShader: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsShader(self: ?*anyopaque, isShader: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsShader(@ptrCast(self), @bitCast(@intFromPtr(isShader)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsProgram(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_IsProgram(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` isProgram: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsProgram(self: ?*anyopaque, isProgram: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsProgram(@ptrCast(self), @bitCast(@intFromPtr(isProgram)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u32 `
    ///
    pub fn CreateShader(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_CreateShader(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` createShader: *const fn (funcparam1: u32) callconv(.c) u32 `
    ///
    pub fn SetCreateShader(self: ?*anyopaque, createShader: *const fn (u32) callconv(.c) u32) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateShader(@ptrCast(self), @bitCast(@intFromPtr(createShader)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn () callconv(.c) u32 `
    ///
    pub fn CreateProgram(self: ?*anyopaque) ?*const fn () callconv(.c) u32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_CreateProgram(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    /// ` createProgram: *const fn () callconv(.c) u32 `
    ///
    pub fn SetCreateProgram(self: ?*anyopaque, createProgram: *const fn () callconv(.c) u32) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateProgram(@ptrCast(self), @bitCast(@intFromPtr(createProgram)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_2_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_0_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html)
pub const qopenglfunctions_3_0_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsVertexArray(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsVertexArray(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isVertexArray: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsVertexArray(self: ?*anyopaque, isVertexArray: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsVertexArray(@ptrCast(self), @bitCast(@intFromPtr(isVertexArray)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsFramebuffer(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsFramebuffer(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isFramebuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsFramebuffer(self: ?*anyopaque, isFramebuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsFramebuffer(@ptrCast(self), @bitCast(@intFromPtr(isFramebuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsRenderbuffer(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsRenderbuffer(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isRenderbuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsRenderbuffer(self: ?*anyopaque, isRenderbuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsRenderbuffer(@ptrCast(self), @bitCast(@intFromPtr(isRenderbuffer)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32, funcparam2: u32) callconv(.c) u8 `
    ///
    pub fn IsEnabledi(self: ?*anyopaque) ?*const fn (u32, u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_IsEnabledi(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    /// ` isEnabledi: *const fn (funcparam1: u32, funcparam2: u32) callconv(.c) u8 `
    ///
    pub fn SetIsEnabledi(self: ?*anyopaque, isEnabledi: *const fn (u32, u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsEnabledi(@ptrCast(self), @bitCast(@intFromPtr(isEnabledi)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html)
pub const qopenglfunctions_3_3_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsSampler(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_IsSampler(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    /// ` isSampler: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsSampler(self: ?*anyopaque, isSampler: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_SetIsSampler(@ptrCast(self), @bitCast(@intFromPtr(isSampler)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_3_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_3_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html)
pub const qopenglfunctions_4_0_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsTransformFeedback(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_IsTransformFeedback(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    /// ` isTransformFeedback: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsTransformFeedback(self: ?*anyopaque, isTransformFeedback: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_SetIsTransformFeedback(@ptrCast(self), @bitCast(@intFromPtr(isTransformFeedback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_0_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html)
pub const qopenglfunctions_4_1_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsProgramPipeline(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_IsProgramPipeline(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    /// ` isProgramPipeline: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsProgramPipeline(self: ?*anyopaque, isProgramPipeline: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_SetIsProgramPipeline(@ptrCast(self), @bitCast(@intFromPtr(isProgramPipeline)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_1_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html)
pub const qopenglfunctions_4_5_corebackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn UnmapNamedBuffer(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_UnmapNamedBuffer(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    /// ` unmapNamedBuffer: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetUnmapNamedBuffer(self: ?*anyopaque, unmapNamedBuffer: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_SetUnmapNamedBuffer(@ptrCast(self), @bitCast(@intFromPtr(unmapNamedBuffer)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_5_CoreBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_5_CoreBackend__Functions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html)
pub const qopenglfunctions_1_0_deprecatedbackend__functions = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn IsList(self: ?*anyopaque) ?*const fn (u32) callconv(.c) u8 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_IsList(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` isList: *const fn (funcparam1: u32) callconv(.c) u8 `
    ///
    pub fn SetIsList(self: ?*anyopaque, isList: *const fn (u32) callconv(.c) u8) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetIsList(@ptrCast(self), @bitCast(@intFromPtr(isList)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: u32) callconv(.c) i32 `
    ///
    pub fn RenderMode(self: ?*anyopaque) ?*const fn (u32) callconv(.c) i32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_RenderMode(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` renderMode: *const fn (funcparam1: u32) callconv(.c) i32 `
    ///
    pub fn SetRenderMode(self: ?*anyopaque, renderMode: *const fn (u32) callconv(.c) i32) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetRenderMode(@ptrCast(self), @bitCast(@intFromPtr(renderMode)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: i32) callconv(.c) u32 `
    ///
    pub fn GenLists(self: ?*anyopaque) ?*const fn (i32) callconv(.c) u32 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_GenLists(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    /// ` genLists: *const fn (funcparam1: i32) callconv(.c) u32 `
    ///
    pub fn SetGenLists(self: ?*anyopaque, genLists: *const fn (i32) callconv(.c) u32) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetGenLists(@ptrCast(self), @bitCast(@intFromPtr(genLists)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend__Functions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_DeprecatedBackend__Functions_Delete(@ptrCast(self));
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
